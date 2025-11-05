#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int d , r;
    d = a / b;
    r = a % b;
    cout<<d<<" "<<r<<" ";
    printf("%.5f\n",double(a) / b);
    return 0;
}
//注意这道题的输出格式，用printf更方便控制小数点位数
//控制小数位数的第二种方法：
//cout<<fixed<<setprecision(2)<<b<<endl;
//需要#include<iomanip>头文件