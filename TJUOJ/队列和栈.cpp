#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int m;
    cin>>m;
    while(m--){
        int n;
        cin>>n;
        queue<int> q;
        stack<int> s;
        string op;
        int temp;
        int flag_q = 0,flag_s = 0;
        while(n--){
            cin>>op;
            if(op == "push"){
                cin>>temp;
                if(!flag_q) q.push(temp);
                if(!flag_s) s.push(temp);
            }
            
            else if(op == "pop"){
                if(!flag_q){
                    if(q.empty()) flag_q = 1;
                    else q.pop();
                }
                if(!flag_s){
                    if(s.empty()) flag_s = 1;
                    else s.pop();
                }
            }

        }
        if(flag_q) cout<<"error"<<endl;
            else{
                while(!q.empty()){
                    cout<<q.front()<<" ";
                    q.pop();
            	}
                cout<<endl;
            }
            if(flag_s) cout<<"error"<<endl;
            else{
                vector<int> res;
                while(!s.empty()){
                    res.push_back(s.top());
                    s.pop();
            	}
                reverse(res.begin(),res.end()); 
                for(auto it = res.begin();it != res.end();it++){
                    cout<<*it<<" ";
                }
                cout<<endl;
            }
    }
    return 0;
}