//使用KMP自动机和动态规划计算包含模式串"TJU"的填法总数

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <numeric>
using namespace std;

// 定义模数
const long long MOD = 1000000007;
// 模式串 P = "TJU"

/**
 * @brief KMP 自动机状态转移函数。
 * @param currentState 当前状态 j (0, 1, 2, 3)
 * @param c 输入字符
 * @return int 下一个状态 j'
 */
int getNextState(int currentState, char c) {
    if (currentState == 0) {
        return (c == 'T') ? 1 : 0;
    } else if (currentState == 1) {
        if (c == 'J') return 2;
        if (c == 'T') return 1;
        return 0; // 其他字符，回到状态0
    } else if (currentState == 2) {
        if (c == 'U') return 3; // 达到目标状态
        if (c == 'T') return 1;
        return 0; // 其他字符，回到状态0
    } else { // currentState == 3 (已匹配)
        // 匹配成功后，寻找最长公共前后缀。 "TJU" + c
        if (c == 'T') return 1;
        return 0; // 其他字符，从头开始
    }
}

/**
 * @brief 求解主函数
 * @param S 输入字符串 (含 '?' )
 * @return long long 包含 "TJU" 的填法总数
 */
long long solve(const string& S) {
    int N = S.length();
    // DP[i][j]: 处理完前 i 个字符后，不含 "TJU" 且 KMP 处于状态 j (0, 1, 2) 的方案数。
    // 状态 3 (已匹配) 不记录在 DP 数组中，因为我们计算的是补集,舍去达到state3的情况。
    vector<vector<long long>> dp(N + 1, vector<long long>(3, 0));

    // 初始状态：处理 0 个字符，处于状态 0，方案数 1
    dp[0][0] = 1; 

    // 状态转移
    for (int i = 1; i <= N; ++i) {
        char current_char = S[i - 1]; // 当前要处理的字符 (0-indexed)
        
        // 遍历所有旧状态 j (0, 1, 2)
        for (int j = 0; j <= 2; ++j) {
            if (dp[i - 1][j] == 0) continue; // 旧状态无方案，跳过

            // 1. 如果是确定的字符
            if (current_char != '?') {
                int next_state = getNextState(j, current_char);
                // 只有 j' < 3 (即 0, 1, 2) 的转移才被记录
                if (next_state < 3) {
                    dp[i][next_state] = (dp[i][next_state] + dp[i - 1][j]) % MOD;
                }
            } 
            // 2. 如果是 '?' (遍历所有 26 个大写字母)
            else {
                for (char c = 'A'; c <= 'Z'; ++c) {
                    int next_state = getNextState(j, c);
                    
                    // 只有 j' < 3 的转移才被记录
                    if (next_state < 3) {
                        dp[i][next_state] = (dp[i][next_state] + dp[i - 1][j]) % MOD;
                    }
                    // 如果 next_state == 3，则这条路径已经包含 "TJU"，被丢弃 (即不计入 dp[i][j'] )
                }
            }
        }
    }

    // --- 最终答案计算 ---

    // 1. 不含 "TJU" 的总方案数
    long long not_contained_ways = (dp[N][0] + dp[N][1] + dp[N][2]) % MOD;

    // 2. 总填法数 = 26 ^ (问号数量)
    int question_marks = 0;
    for (char c : S) {
        if (c == '?') {
            question_marks++;
        }
    }

    long long total_ways = 1;
    for (int k = 0; k < question_marks; ++k) {
        total_ways = (total_ways * 26) % MOD;
    }
    
    // 3. 包含 "TJU" 的方案数 = 总填法数 - 不含 "TJU" 的方案数
    long long contained_ways = (total_ways - not_contained_ways + MOD) % MOD; 
    // + MOD 是为了防止结果为负数 (因为在模运算下， (a - b) % m 可能为负)

    return contained_ways;
}

int main() {
    // 优化输入输出
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;
        cout << solve(S) << "\n";
    }

    return 0;
}