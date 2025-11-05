#include<iostream>
#include<stack>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        string str;
        cin>>str;
        if(str=="") {
            cout<<"YES"<<endl;
            continue;
        }
        stack<char> s;
        for(int i = 0;i<str.length();i++){
            if(!s.empty() && s.top() == '(' && str[i] == ')') s.pop();
            //报错的原因是在空栈时调用了 s.top()，这会导致未定义行为。
            else s.push(str[i]);
        }
        if(s.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}