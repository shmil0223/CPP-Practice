//采用不断扩充vector的方法记录地毯覆盖情况,但是MLE
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    vector<vector<int>> carpets(1, vector<int>(1, 0));
    int n;
    cin>>n;
    int a,b,x,y;
    int mx=1,my=1;
    for(int k = 1;k<=n;k++){
        cin>>a>>b>>x>>y;
        mx = max(mx,a+x+1);
        my = max(my,b+y+1);
        carpets.resize(my);
        for (int i = 0; i < my; i++) {
            if (carpets[i].size() < mx) carpets[i].resize(mx, 0);
        }
        for(int i = b;i<=b+y;i++){
            for(int j = a;j<=a+x;j++) carpets[i][j] = k;
            }
        }
    int wx,wy;
    cin>>wx>>wy;
    cout<<((carpets[wy][wx])?(carpets[wy][wx]):-1);
    return 0;
}
