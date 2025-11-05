#include<iostream>
using namespace std;
int main(){
    int a,b,c,sum;
    while(true){
        cin>>a>>b>>c;
        sum = 0;
        if(a == 0 && b == 0 && c == 0) break;
        for(int i = a;i <= b;i++){
            if(c % i == 0) sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
//反思：注意c % i == 0 而不是 c / i == 0