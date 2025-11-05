#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,min_num,num;
    while(true){
        cin>>n;
        if(n == 0) break;
        int a[n];
        cin>>a[0];
        min_num = a[0];
        num = 0;
        for(int i = 1;i < n;i++){
            cin>>a[i];
            if(a[i] < min_num){
                min_num = a[i];
                num = i;
            }
        }
 		swap(a[num],a[0]);
        for(int i = 0;i < n-1;i++){
            cout<<a[i]<<" ";
        }
        cout<<a[n-1]<<endl;
    }
    return 0;
}