#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin.ignore();//Çå³ı»»ĞĞ·û
    while(n--){
        getline(cin,str);
        if(str[0] >= 97 && str[0] <= 122) str[0] -= 32;
        for(int i = 1;i < str.length();i++){
            if(str[i] == ' ' && str[i+1] >= 97 && str[i+1] <= 122) str[i+1] -= 32;
        }
        cout<<str<<endl;
    }
    return 0;
}