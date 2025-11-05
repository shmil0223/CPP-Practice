#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> F_num;
vector<long long> F;
void myPrint(int val){
    cout<<F[val]<<endl;
}

int main(){
    int N,num,max_num;
    cin>>N;
    
    F.push_back(0);
    F.push_back(1);
    F.push_back(1);
    for(int i = 0;i<N;i++){
        cin>>num;
        F_num.push_back(num);
    }
    sort(F_num.begin(),F_num.end());
    max_num = F_num[N-1];
    for(int i = 3;i<=max_num;i++){
        F.push_back(F[i - 1] + F[i - 2]);
    }
    for_each(F_num.begin(),F_num.end(),myPrint);
    return 0;
    
}

/* 反思：
1.要用long long存储斐波那契数列，int会溢出
2.for_each和sort使用的时候都需要加入#include<algorithm>头文件
3.myPrint函数的val，要定义
4.注意越界问题，vector的下标从0开始
*/       