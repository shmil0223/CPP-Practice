#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int m,num=0;
    double a[6400],n;
    while(true){
        cin>>n>>m;
        if(n==0 && m==0) break;
       
        for(int i = 0;i < m;i++){
            a[num] += n;
            n = pow(n,0.5);
        }
        num++;
    }
    for(int i = 0;i < num;i++){
        printf("%.2f\n",a[i]);
    }
    return 0;
}
/*反思：注意num++的使用位置，否则第一个就成了num[1]*/