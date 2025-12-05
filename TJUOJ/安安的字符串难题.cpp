#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    char str_flag;
    string str;
    while(N--){
        cin>>str;
        str_flag = str[0];
        int sum = 1;
        string result;
        for(int i = 1;i<str.length();i++){
            if(str[i] == str_flag) sum++;
            else{
                if(sum>1) result = result + to_string(sum) + str_flag;
                else result += str_flag;
                str_flag = str[i];
                sum = 1;
            }
        }
        if(sum>1) result = result + to_string(sum) + str_flag;
        else result += str_flag;
        cout<<result<<endl;
    }
    return 0;
}