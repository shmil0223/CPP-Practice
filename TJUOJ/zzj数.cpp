#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string n;
    cin>>n;
    vector<int> result;
    for(int i = 0;i<n.length()-1;i++){
        string temp = n;
        swap(temp[i],temp[i+1]);
        result.push_back(stoi(temp));
    }
    auto it = max_element(result.begin(),result.end());
    cout<<*it;
    return 0;
}