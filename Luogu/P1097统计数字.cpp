#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> res;
    unordered_map<int,int> nums;
    for(int i = 0;i<n;i++){
        int temp;
        cin>>temp;
        if(nums.find(temp) != nums.end()){
            nums[temp]++;
        }
        else{
            nums[temp] = 1;
        }
    }
    vector<int> key;
    for(auto &p : nums) key.push_back(p.first);
    sort(key.begin(),key.end());
    for(int i = 0;i<key.size();i++){
        cout<<key[i]<<" "<<nums[key[i]]<<endl;
    }
    return 0;
}