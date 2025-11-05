#include<iostream>
using namespace std;
int main(){
    int T,m,n;
    cin>>T;
    int x[T],y[T];
    for(int i = 0;i < T;i++){
        x[i] = 0;
        y[i] = 0;
        cin>>m>>n;
        for(int j = m;j<=n;j++){
            if(j % 2 == 0) x[i] += j*j;
            else y[i] += j * j * j;
        }
    }
    for(int i = 0;i < T;i++){
        cout<<x[i]<<" "<<y[i]<<endl;
    }
    return 0;
}
/*反思：
1、只有全局变量或静态变量才会自动初始化为 0。
局部变量（在函数内部声明的）不会自动初始化。
因此，必须手动初始化 x 和 y 数组的每个元素为 0。
*/