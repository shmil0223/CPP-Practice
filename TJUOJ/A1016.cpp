#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int total = n;
    int caps = n;
    while(caps >= k){
        int new_drinks = caps/k;
        total += new_drinks;
        caps = caps%k + new_drinks;   
    }
    if(caps == k-1) total += 1;
    cout<<total;
    return 0;
    //注意：当剩余的空瓶数等于k-1时，还可以再换一瓶
    //反思：不要将其复杂化，其实就是除法和取模运算的组合，相当于一种进位的算法
}