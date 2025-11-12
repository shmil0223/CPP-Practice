#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long a, m;
    int n, x;
    if (!(cin >> a >> n >> m >> x)) return 0;

    // 边界
    if (n == 1) { cout << 0 << '\n'; return 0; }
    if (n == 2) { cout << (x == 1 ? a : 0) << '\n'; return 0; }

    // 计算 plus 的系数 p1,p2 使 plus[i] = p1[i]*a + p2[i]*b
    vector<long long> p1(n+1,0), p2(n+1,0);
    p1[1]=1; p2[1]=0;
    p1[2]=0; p2[2]=1;
    for(int i=3;i<=n;i++){
        p1[i]=p1[i-1]+p1[i-2];
        p2[i]=p2[i-1]+p2[i-2];
    }//本质上满足斐波那契数列

    // 计算 sum 的系数 s1,s2 使 sum[i] = s1[i]*a + s2[i]*b，通过 plus 推导而来
    vector<long long> s1(n+1,0), s2(n+1,0);
    s1[1]=1; s2[1]=0;
    s1[2]=1; s2[2]=0; // sum[2] = a
    for(int i=3;i<=n;i++){
        // sum[i] = sum[i-1] + plus[i] - plus[i-1]
        s1[i] = s1[i-1] + p1[i] - p1[i-1];
        s2[i] = s2[i-1] + p2[i] - p2[i-1];
    }

    // sum[n-1] = a*s1[n-1] + b*s2[n-1] == m
    long long S1 = s1[n-1], S2 = s2[n-1];
    // 题设保证可解且为整数 这道题的关键就是把b解出来
    long long b = (m - a * S1) / S2;

    // 用 a,b 生成实际 plus 和 sum，并输出 sum[x]（x==n 输出0）
    vector<long long> plus(n+1,0), sum(n+1,0);
    plus[1]=a; plus[2]=b;
    sum[1]=a; sum[2]=a;
    for(int i=3;i<=n-1;i++){
        plus[i] = plus[i-1] + plus[i-2];
        sum[i] = sum[i-1] + plus[i] - plus[i-1];
    }
    // 注意：离开第 n 站时人数为0
    if (x == n) cout << 0 << '\n';
    else cout << sum[x] << '\n';

    return 0;
}
