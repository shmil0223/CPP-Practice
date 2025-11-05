#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
std::unordered_map<int,int> ifrep;



int main(){
    int n,m,temp;
    while(true){
        cin>>n>>m;
        if(n == 0 && m == 0) break;
        vector<int> result;
        ifrep.clear();


      	for(int i = 0;i<n;i++){
            cin>>temp;
            result.push_back(temp);
        }
        for(int i = 0;i<m;i++){
            cin>>temp;
            result.push_back(temp);
        }
        sort(result.begin(),result.end());

       vector<int>::iterator it = unique(result.begin(),result.end());
       result.erase(it,result.end());




        for(vector<int>::iterator it = result.begin();it < result.end() - 1;it++){
            cout<<*it<<" ";
        }
        cout<<*result.rbegin()<<endl;
    }
    return 0;
}