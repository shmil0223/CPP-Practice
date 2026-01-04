#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        char op[2];
        int k=0;
        int res[3];
        int init = 0;
        for(int i = 0;i<s.length();i++){
            
            if(!(s[i]>='0' && s[i]<='9')){
                res[k] = stoi(s.substr(init,i-init));
                init = i+1;
                op[k] = s[i];
                k++;
                if(k==2){
                    res[2] = stoi(s.substr(i+1,s.length()-i));
                }
            }
        }
        if(op[0] == '+' && op[1] == '*'){
        	//cout<<res[0]<<" "<<res[1]<<" "<<res[2]<<endl;
            cout<<res[0] + (res[1] * res[2])<<endl;
        }
        else{
        	//cout<<res[0]<<" "<<res[1]<<" "<<res[2]<<endl;
        	cout<<res[0]*res[1] + res[2]<<endl;
		}
    }
    return 0;
}