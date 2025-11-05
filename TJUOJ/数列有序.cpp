#include<iostream>
using namespace std;
int main(){
   int n,m,b=0;
   while(true){
        cin>>n>>m;
        if(n == 0 && m == 0) break;

        b = 0;//千万别忘了初始化
        int A[n+1];
        for(int i = 0;i<n;i++){
            cin>>A[i];
        }

        for(int i = n-1;i>=0;i--){
            if(A[i] > m) A[i + 1] = A[i];
            else {
                A[i + 1] = m;
                b = 1;
                break;
            }
        }
        if(b == 0) A[0]= m;//处理m比所有元素都小的情况
        
        for(int i = 0;i<n;i++){
            cout<<A[i]<<" ";
        }
        cout<<A[n]<<endl;
   }
    return 0;
}
/*反思：
1、实现了插入排序的单次，但是注意m最大最小的情况
2、不要比较完再整体移动数组，采用两两交换

*/