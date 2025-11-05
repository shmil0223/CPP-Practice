#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int m,n,temp,r,c,result;
    cin>>m>>n;
    int max = INT_MIN;
    for(int i = 1;i <= m;i++){
        for(int j = 1;j <= n;j++){
            cin>>temp;
            if(abs(temp) >= max){
                max = abs(temp);
                result = temp;
                r = i;
                c = j;
            }
        }
    }
    cout<<r<<" "<<c<<" "<<result;
    return 0;
}