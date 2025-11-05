#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,C;
    double s,c,h,C_rad;
    cin>>a>>b>>C;
    C_rad = C * M_PI / 180.0;
    s = 0.5*a*b*sin(C_rad);
    c = sqrt(a*a + b*b - 2*a*b*cos(C_rad))+a+b;
    h = 2*s/a;
    printf("%.4f\n%.4f\n%.4f",s,c,h);
    return 0;
}
/*
本题刚刚出现的错误：
1.忘记#include<cmath>，导致sin、cos、sqrt等函数无法使用；
2.使用三角函数时，忘记将角度转化为弧度；
3.输入的C为int类型，转化为弧度时忘记重新定义一个double类型的变量C_rad；
4.注意区分c和C，变量名区分大小写。
*/