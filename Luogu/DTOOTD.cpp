#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// 使用 unsigned long long 利用自然溢出特性 (相当于对 2^64 取模)
// 这样可以避免昂贵的取模运算，且在竞赛中发生冲突概率极低
typedef unsigned long long ull;

const int MAXN = 1000005;
const int BASE = 13331; // 选择一个质数作为 Base

ull P[MAXN];  // 存储 BASE 的幂次
ull H1[MAXN]; // 正向字符串的哈希前缀和
ull H2[MAXN]; // 反向字符串的哈希前缀和

// 初始化 Base 的幂次表
void init() {
    P[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        P[i] = P[i - 1] * BASE;
    }
}

// 获取子串哈希值的函数
// H 为前缀哈希数组，l 和 r 为 1-based 索引 (对应字符串的第 l 到第 r 个字符)
ull get_hash(ull* H, int l, int r) {
    return H[r] - H[l - 1] * P[r - l + 1];
}

void solve() {
    string s;
    cin >> s;
    int n = s.length();

    // 1. 检查 S 本身是否非回文串
    // 直接双指针扫描，O(N)
    bool isPal = true;
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            isPal = false;
            break;
        }
    }

    // 如果原串不是回文，直接输出
    if (!isPal) {
        cout << "YES" << endl;
        cout << 1 << endl;
        cout << s << endl;
        return;
    }

    // 2. S 是回文串。检查是否所有字符都相同。
    bool allSame = true;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[0]) {
            allSame = false;
            break;
        }
    }

    // 如果全是同一个字符（如 "aaaa"），无法分割出非回文子串
    if (allSame) {
        cout << "NO" << endl;
        return;
    }

    // 3. S 是由不同字符组成的回文串。尝试将其分割为 2 段。
    // 每段长度必须 >= 2（因为长度为1的子串必然是回文）。
    
    // 计算正向哈希
    H1[0] = 0;
    for (int i = 0; i < n; i++) {
        H1[i + 1] = H1[i] * BASE + s[i];
    }

    // 计算反向哈希
    // 反向字符串 rev_s[i] 等于原字符串 s[n-1-i]
    H2[0] = 0;
    for (int i = 0; i < n; i++) {
        H2[i + 1] = H2[i] * BASE + s[n - 1 - i];
    }

    // Lambda: 快速检查 s[l...r] 是否为回文 (l, r 为 0-based 索引)
    auto check_pal_hash = [&](int l, int r) -> bool {
        // 原字符串区间 [l, r] 对应长度 len
        // 正向哈希取 H1 的 [l+1, r+1]
        ull h_fwd = get_hash(H1, l + 1, r + 1);
        
        // 该区间在反转字符串中的对应位置：
        // s 的第 0 个字符 对应 rev_s 的第 n-1 个
        // s 的第 l 个字符 对应 rev_s 的第 n-1-l 个
        // s 的第 r 个字符 对应 rev_s 的第 n-1-r 个
        // 所以反向区间是 [n-1-r, n-1-l]
        int rev_l = n - 1 - r;
        int rev_r = n - 1 - l;
        ull h_bwd = get_hash(H2, rev_l + 1, rev_r + 1);

        return h_fwd == h_bwd;
    };

    // 枚举分割点 i。
    // 分割为 s[0...i-1] 和 s[i...n-1]。
    // 左半部分长度 i，右半部分长度 n-i。
    // 均需 >= 2，所以 i 从 2 开始，到 n-2 结束。
    for (int i = 2; i <= n - 2; i++) {
        // 如果左边不是回文 且 右边不是回文
        if (!check_pal_hash(0, i - 1) && !check_pal_hash(i, n - 1)) {
            cout << "YES" << endl;
            cout << 2 << endl;
            cout << s.substr(0, i) << " " << s.substr(i) << endl;
            return;
        }
    }

    // 如果遍历所有两段切分都无法满足（例如 "ababa" 这种特殊情况），则输出 NO
    cout << "NO" << endl;
}

int main() {
    // 优化 I/O 效率
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    init(); // 初始化哈希表
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
    //12
    //25
    //36
}