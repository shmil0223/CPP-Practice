#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int a[n];
        int index = 0,temp;
        for(int i = 0;i<n;i++){
            if(i == 0){
                cin>>a[0];
                continue;
            }
            cin>>temp;
            if(temp > a[index]){
                a[++index] = temp;
            }
            else{
                cout<<"The input number should be larger than "<<a[index]<<'.'<<endl;
            }
        }
        for(int i=0;i<=index;i++){
            for(int k = 0;k<a[index] - a[i];k++) cout<<'-';
            for(int j = 0;j < a[i]*2;j++) cout<<'*';
            for(int k = 0;k<a[index] - a[i];k++) cout<<'-';
            cout<<endl;
        }
    }
}