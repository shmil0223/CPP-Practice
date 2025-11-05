#include<iostream>
using namespace std;
int main(){
    int T,n;
    cin>>T;
    int N[T-1][6];
    int result[T - 1];
    for(int i = 0;i<T;i++){
        cin>>n;
        result[i] = 1;
        // 初始化result数组
        for(int j = 0;j < n;j++){
            cin>>N[i][j];
            if(N[i][j] % 2 ==1) result[i] *= N[i][j];
        }
    }

    for(int i = 0;i<T;i++){
        cout<<result[i]<<endl;
    }
    return 0;
}
/*反思：
1、初始化result[T - 1]数组时，不能直接写成int result[T - 1] = {1};
这样只会说是result[0] = 1,其他元素都是0
需要使用for循环来逐个赋值
2、结果使用long long防止溢出
3、这道题可以使用vector更方便
*/