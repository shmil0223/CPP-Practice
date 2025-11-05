//堆的应用
//需要复习
#include<iostream>
#include<vector>
#include<queue>
#include<functional>
using namespace std;
int main(){
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> minHeap;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        minHeap.push(x);
    }
    
    long long ans = 0;
    while(minHeap.size()>1){
        int x = minHeap.top();minHeap.pop();
        int y = minHeap.top();minHeap.pop();
        int sum = x + y;
        ans += sum;
        minHeap.push(sum);
    }
    cout<<ans<<endl;
    return 0;
}