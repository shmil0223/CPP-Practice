#include<iostream>
using namespace std;
int main(){
    int x,num = 0;
    int n[100][3] = {0};
    for(int i = 0;;i++){
        cin>>x;
        if(x == 0) break;
        num++;
        double a[x];
        for(int j = 0;j < x; j++){
            cin>>a[j];
            if(a[j] < 0) n[i][0]++;
            else if(a[j] == 0) n[i][1]++;
            else n[i][2]++;
        }     
	}
    for(int i = 0;i < num; i++){
        cout<<n[i][0]<<" "<<n[i][1]<<" "<<n[i][2]<<endl;
    }
    return 0;
    
}
/*反思：
1、由于x有输入值可以不初始化，是在每次输入后才使用的；
2、但是num和int n[100][3] = {0};需要初始化,其中注意二维数组初始化的方法；
3、使用数组时，数组的下标是从0开始的，在for循环中要注意边界问题
如果int i =1,会出现越界问题，Runtime Error
4、注意输入的数是整型还是浮点型，仔细看说明，不能想当然。
*/