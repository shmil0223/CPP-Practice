#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    string str;
    unordered_map<char,int> res;
    
    while(n--){
        getline(cin,str);
        res['a'] = 0;
    	res['e'] = 0;
    	res['i'] = 0;
    	res['o'] = 0;
    	res['u'] = 0;
        for(int i = 0;i <str.length();i++){
            if(str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' ){
                res[str[i]]++;
            }
        }
        cout<<"a:"<<res['a']<<endl;
        cout<<"e:"<<res['e']<<endl;
        cout<<"i:"<<res['i']<<endl;
        cout<<"o:"<<res['o']<<endl;
        cout<<"u:"<<res['u']<<endl;
        
        res.clear();
        if(n!=1) cout<<endl;
    }
}


