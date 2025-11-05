////important
#include<iostream>
using namespace std;
bool isWan(int n){
    int sum = 1;//要从1开始，而不是0，因为下面的循环中把i==1的情况剔除了
    if(n <= 1) return false;//注意题目条件 大于1的自然数
    for(int i = 2;i * i<=n;i++){
        if(n % i == 0){
            sum = sum + i;
            if(i * i != n) sum = sum + n / i;//注意要把成对因子加上，但是注意判断平方数的情况
        }
        if(sum > n) return false;
    }
    return sum == n;
}
int main(){
    int n;
    int num1,num2;
    cin>>n;
    while(n--){
        cin>>num1>>num2;
        int sum = 0;
        for(int i = num1;i<=num2;i++){
            if(isWan(i)) sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}