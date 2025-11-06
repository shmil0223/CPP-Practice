#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> res;
    //第一个数字是1
    for(int i = 123;i<=329;i++){
        int a = i;
        int b = i*2;
        int c = i*3;
        if(c>987) continue;
        //判断是否符合条件
        vector<bool> used(10,false);
        used[0] = true; //不考虑0
        for(char ch : to_string(a)){
            used[ch - '0'] = true;
        }
        for(char ch : to_string(b)){
            used[ch - '0'] = true;
        }
        for(char ch : to_string(c)){
            used[ch - '0'] = true;
        }
        if(all_of(used.begin(),used.end(),[](bool v){return v;})){
            res.push_back(a);
        }
    }
    for(int num : res){
        cout<<num<<" "<<num*2<<" "<<num*3<<endl;
    }

    
}