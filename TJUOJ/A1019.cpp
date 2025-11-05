#include<iostream>
using namespace std;
int main(){
    int W,H,x,y,r;
    cin>>W>>H>>x>>y>>r;
    if((x + r <= W) && (x - r >= 0) && (y + r <= H) && (y + r >= 0)) cout<<"Yes";
    else cout<<"No";
    return 0;
    
}
//判断一个圆是否完全在一个矩形内
//反思：错误原因：注意取等的情况