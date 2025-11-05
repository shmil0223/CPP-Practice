#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int A[n+1][m+1];
    for(int i = 1;i<=n;i++){
        for(int j = 1;j <= m;j++){
            cin>>A[i][j];
        }
    }
    int b[m+1],result[n+1];
   
    for(int i = 1;i<=m;i++){
        cin>>b[i];
    }
    for(int i = 1;i<=n;i++){
        result[i] = 0;
        for(int j = 1;j <= m;j++){
            result[i] += A[i][j] * b[j];
        }
    }
    for(int i=1;i<=n;i++){
        cout<<result[i]<<endl;
    }
    return 0;
}
// 反思：1、初始化 2、注意细节 比如说i = 1不要写成i = i这种低级错误