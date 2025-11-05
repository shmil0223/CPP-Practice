#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n=1,a[8000][100],num=0;
    double result[8000]={0};
    while(true){
        cin>>n;
        if(n == 0) break;
        int max_num = INT_MIN;
        int min_num = INT_MAX;
        for(int i = 0;i<n;i++){
            cin>>a[num][i];
            if(a[num][i] < min_num) min_num = a[num][i];
            if(a[num][i] > max_num) max_num = a[num][i];
            result[num] += a[num][i];
        }
        result[num] = (result[num] - min_num - max_num) / (n-2);
       
        num++;
    }
    for(int i = 0;i < num;i++){
        printf("%.2f\n",result[i]);
    }
    return 0;
}
/*反思：1、避免使用固定大小的数组存储所有数据，
只需在循环内部计算并直接存储平均值。或者，
在计算完成后立即输出结果，避免存储过多的结果。
2、如果非得这样写的话，注意二维数组的行数要足够大，
否则会出现段错误。Runtime Error
*/