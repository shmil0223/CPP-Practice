#include<iostream>
using namespace std;
int main(){
    int T,n;
    string str;
    cin>>T;
    while(T--){
        cin>>n;
        int m,res = 0,base = 1;
        str = "";
        while(n){
            m = n%2;
            str += m+'0';
            n /= 2;
        }
        for(int i = str.length()-1;i>=0;i--){
            res += base * (str[i] - '0' );
            base *= 2;
        }
        cout<<res<<endl;
    }
    return 0;
}