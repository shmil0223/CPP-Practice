#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a[n];
    long long max_num = -1000000,min_num = 1000000,sum = 0;
    for(int i = 1;i <= n; i++){
        cin>>a[i];
        sum += a[i];
        if(a[i] > max_num) max_num = a[i];
        if(a[i] < min_num) min_num = a[i];
}
    cout<<min_num<<" "<<max_num<<" "<<sum;
    return 0;
}
/*
    1、注意输入的数据范围，sum的话32位整数int放不开，需要用64位整数long long
    2、刚开始应该设置max_num和min_num的初始值，不能随便设置成0
    3、12行复制粘贴时注意修改变量名
*/