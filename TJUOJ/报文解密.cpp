#include<iostream>
using namespace std;
char* str(char* x){
    if(*x >= 65 && *x <= 68){
        *x += 22;
    }
    else if(*x >= 69 && *x <= 90)
    {
        *x -= 4;
    }
    return x;
}

int main(){
    string strs;
    cin>>strs;
    for(int i = 0;i<strs.length();i++){
        str(&strs[i]);
    }
    cout<<strs<<endl;
    return 0;
}





