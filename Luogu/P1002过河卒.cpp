#include <iostream>
#include <vector>
using namespace std;
vector<vector<long long>> dp;
vector<vector<bool>> chess;
bool inside(int i,int j,int n,int m){ return i>=0 && i<=n && j>=0 && j<=m; }
int main(){
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    chess.assign(n+1,vector<bool>(m+1,true));
    dp.assign(n+1,vector<long long>(m+1,0));
    
    // 标记马和被攻击的格子（带边界检查）
    int dx[] = {0,-2,-2,-1,-1,1,1,2,2};
    int dy[] = {0,-1,1,-2,2,-2,2,1,-1};
    for(int k=0;k<9;k++){
        int nx = x + dx[k], ny = y + dy[k];
        if(inside(nx,ny,n,m)) chess[nx][ny] = false;
    }

    if (!chess[0][0]) { // 起点被封
        cout << 0;
        return 0;
    }
    dp[0][0] = 1;
    //for(int i = 0;i<=m;i++) if(chess[0][i]) dp[0][i] = 1;
    //for(int i = 0;i<=n;i++) if(chess[i][0]) dp[i][0] = 1;
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=m;j++){
            if(chess[i][j]){
                if (i > 0) dp[i][j] += dp[i - 1][j];
                if (j > 0) dp[i][j] += dp[i][j - 1];
            }
        }
    }

    cout << dp[n][m] << endl;
    return 0;
}