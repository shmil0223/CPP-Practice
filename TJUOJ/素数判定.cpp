//important
#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
    n = abs(n);
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5;i*i <=n;i += 6){
        if(n % i == 0||n % (i+2) == 0) return false;
    }
    return true;
}
int caculate(int n){
    return pow(n,2)+n+41;
}
int main(){
    int x,y;
    while(true){
        cin>>x>>y;
        if(x == 0 && y == 0) break;

        int flag = 0;
        for(int i = x;i<=y;i++){
            if(!isPrime(caculate(i))){
                flag = 1;
                cout<<"Sorry"<<endl;
                break;
            }
        }
        if(flag == 0) cout<<"OK"<<endl;
    }
    return 0;
}
//反思：学习判断素数的6k+-1法则