#include<iostream>
using namespace std;
int main(){
    long long x;
    int sum;
    while(true){
        cin>>x;
         sum = 0;
        if(x == 0) break;
        while(x != 0){
            sum += x % 10;
            x /= 10;
        }
        cout<<sum<<endl;
       
    }
    return 0;
    
}
//反思：注意初始化sum,而且注意每次输入一个新的x就要重新初始化sum