/*
1、动态规划
2、使用字符串存储大数，高精度加法，否则会溢出
3、预处理所有可能的查询结果，提升查询效率，找到其中最大的一项
*/


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string addStr(const string &a, const string &b){
    string res;
    int i = a.size()-1, j = b.size()-1, carry = 0;
    while(i >= 0 || j >= 0 || carry){
        int da = (i >= 0 ? a[i--]-'0' : 0);
        int db = (j >= 0 ? b[j--]-'0' : 0);
        int s = da + db + carry;
        carry = s / 10;
        res.push_back(char('0' + (s % 10)));
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    ios::sync_with_stdio(false);//关闭同步，提高输入输出效率
    cin.tie(nullptr);//解除cin和cout的绑定，提高输入输出效率

    vector<int> queries;
    int n;
    while (cin >> n){
        queries.push_back(n);
    }
    int maxn = *max_element(queries.begin(), queries.end());
    vector<string> dp(maxn + 1, "0");
    if(maxn >= 1) dp[1] = "1";
    if(maxn >= 2) dp[2] = "2";
    if(maxn >= 3) dp[3] = "4";
    for(int i = 4; i <= maxn; ++i){
        // dp[i] = dp[i-1] + dp[i-2] + dp[i-3]
        string s = addStr(dp[i-1], dp[i-2]);
        dp[i] = addStr(s, dp[i-3]);
    }
    for(int q : queries){
        cout << dp[q] << '\n';
    }
    return 0;
}