#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x[n]={0},y[n]={0};
    double sum1,sum2,sum3,sum4;
    for(int i = 0;i<n;i++){
        cin>>x[i];
    }
    for(int i = 0;i<n;i++){
        cin>>y[i];
    }
    sum4 = abs(x[0] - y[0]);
    for(int i = 0;i<n;i++){
        sum1 += abs(x[i] - y[i]);
        sum2 += pow((x[i]-y[i]),2);
        sum3 += pow(abs(x[i] - y[i]),3);
        if(abs(x[i] - y[i]) > sum4) sum4=abs(x[i] - y[i]);
    }
    printf("%.6f\n%.6f\n%.6f\n%.6f",sum1,pow(sum2,1.0/2.0),pow(sum3,1.0/3.0),sum4);
    return 0;
}

//反思：1、此题本身就有错，但是注意看题目的说明
//2、换行时\n而不是/n，一定注意这个低级错误