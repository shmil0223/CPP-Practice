#include<iostream>
using namespace std;
int main(){
    int n,q,b,e,num;
    cin>>n;
    int A[n];
    for(int i = 0;i<n;i++){
        cin>>A[i];
    }
    cin>>q;
    for(int i = 0;i<q;i++){
        cin>>b>>e;
        int temp[e - b];
        num = 0;
        for(int j = b;j<e;j++){
            temp[num] = A[j];
            num++;
        }
        num--;
        for(int j = b;j<e;j++){
            A[j] = temp[num];
            num--;
        }
    }
    for(int i = 0;i<n-1;i++){
        cout<<A[i]<<" ";
    }
    cout<<A[n-1]<<endl;
    return 0;
}

/*反思：使用中间数组，用num表示中间数组的下标，先将要反转的部分存入中间数组，
注意一定要加一个num--，然后再将中间数组的值赋给原数组的对应位置。
否则会出现数组越界的问题*/