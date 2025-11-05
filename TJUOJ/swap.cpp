#include<iostream>
using namespace std;
int main(){
    int n,q,b,e,t;
    cin>>n;
    long long A[n];
    for(int i = 0;i<n;i++){
        cin>>A[i]; 
    }
    cin>>q;
    for(int i = 0;i < q;i++){
        cin>>b>>e>>t;
        long long temp[e - b];
        for(int k = b,sum=0;k<e;k++,sum++){
            temp[sum] = A[k];
        }
        for(int k = t, j = b; k < t + e - b; k++, j++){
            A[j] = A[k];
        }
        for(int k = t,sum = 0;k<t+e-b;sum++,k++){
            A[k] = temp[sum];
        }
    }
    for(int i = 0;i<n-1;i++){
        cout<<A[i]<<" ";
    }
    cout<<A[n-1]<<endl;
    return 0;
    
}

/*
这段代码做的是整体区间互换，并不是“逐个元素交换”。
题目要求的是 swap(A[b+k], A[t+k]) 对每个 k 单独交换，
如果区间长度大于 1，你的方法在区间重叠或者长度大于1时就会错。
\可能会出现重叠覆盖
*/
