#include<iostream>
#include<algorithm>
using namespace std;
int dp[1001][1001];
int main(){
    int n,m;
    cin>>n>>m;
    string A,B;
    cin>>A>>B;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            if(A[i-1] == B[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            //注意这里用i-1和j-1来访问字符串
            else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
    cout<<dp[n][m]<<endl;
    return 0;
}