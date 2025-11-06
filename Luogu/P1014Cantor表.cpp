#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    long long k = 0;
    long long sum = 0;
    while(sum < N){
        k++;
        sum += k;
    }
    long long pre = sum - k;
    long long t = N - pre;
    long long num,den;
    if(k % 2 == 0){
        num = t;
        den = k + 1 - t;
    }
    else{
        num = k + 1 - t;
        den = t;
    }
    cout<<num<<"/"<<den<<endl;
    return 0;
}