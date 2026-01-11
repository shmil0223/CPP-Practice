#include<iostream>
#include<cmath>
using namespace std;
bool isPrimeNumber(unsigned int n){
    if(n < 2) return false;
    if(n==2) return true;
    for(int i = 2;i*i<n;i++){
        if(n % i == 0) return false;
    }
    return true;
}
unsigned int toNumber(string s){
    int res = 0;
    int len = s.length();
    int base = 1;
    for(int i = len - 1;i>=0;i--){
        res += (s[i]-'0')*base;
        base *= 2;
    }
    return res;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        string n;
        cin>>n;
        if(isPrimeNumber(toNumber(n))){
            cout<<n<<" is a prime number."<<endl;
        }
        else cout<<n<<" is NOT a prime number."<<endl;
    }
}