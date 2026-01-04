#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    vector<int> res;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    res.push_back(a[0]);
    for(int i = 1;i<n;i++){
        vector<int>::iterator it = find(res.begin(),res.end(),a[i]);
        if(it == res.end()){
            res.push_back(a[i]);
        }
    }
    sort(res.begin(),res.end());
   	for(int i = 0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}