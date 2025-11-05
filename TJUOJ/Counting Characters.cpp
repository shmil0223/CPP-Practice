#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<char,int> result;
    for(int i = 65;i<=90;i++){
        result[i] = 0;
    }
    for(int i = 97;i<=122;i++){
        result[i] = 0;
    }
    string str;
    getline(cin,str);
    for(int i = 0;i<str.length();i++){
        result[str[i]] ++;
    }
    for(int i = 97;i<=122;i++){
        cout<<char(i)<<" "<<":"<<" "<<result[i] + result[i-32]<<endl;
    }
    return 0;
    
    
    
    
   /* result['a'] = 0;
    result['b'] = 0;
    result['c'] = 0;
    result['d'] = 0;
    result['e'] = 0;
    result['f'] = 0;
    result['g'] = 0;
    result['h'] = 0;
    result['i'] = 0;
    result['j'] = 0;
    result['k'] = 0;
    result['l'] = 0;
    result['m'] = 0;
    result['n'] = 0;
    result['o'] = 0;
    result['p'] = 0;
    result['q'] = 0;
    result['r'] = 0;
    result['s'] = 0;
    result['t'] = 0;
    result['u'] = 0;
    result['v'] = 0;
    result['w'] = 0;
    result['x'] = 0;
    result['y'] = 0;
    result['z'] = 0;
    */
    
}