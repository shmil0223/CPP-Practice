#include<iostream>
using namespace std;
int main(){
    int n,m,sum=0;
    int init = 2;
    while(true){
        cin>>n>>m;
        if(n == 0 && m == 0) break;
       	init = 2;
        sum = 0;
        for(int i = 0;i < n;i++){
            sum += init;
            if((i+1) % m == 0){
                cout<<sum/(m*1.0)<<" ";
                sum = 0;
            }
            init += 2;
        }
        if(n % m != 0){
            cout<<sum/((n%m)*1.0)<<endl;
        }
        else cout<<endl;
    }
    return 0;
}
//反思:一定注意换行，尽管输入的时候回车相当于换行，但是还是要输出换行符