#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    string str1,str2;
    while(T--){
        cin>>str1>>str2;
        int sum = 0;
        for(int i = 0;i<=str1.length()-str2.length();i++){
            bool flag = 1;
            for(int j = 0;j < str2.length();j++){
                if(str1[i+j] != str2[j]){
                    flag = 0;
                    break;
                }
            }
            if(flag) sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}