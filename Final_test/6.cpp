#include<iostream>
using namespace std;
void countDigit(char *p,int count[10]);
int main(){
    char s[80];
    cout<<"请输入一串字符：";
    cin.getline(s, 80);
    int count[10];
    for(int i = 0;i<10;i++){
        count[i] = 0;
    }
    countDigit(s,count);
    cout<<"字符串"<<s<<"中"<<endl;
    for(int i = 0;i<10;i++){
        cout<<"数字"<<i<<"出现的次数为"<<count[i]<<endl;
    }
    return 0;
}

void countDigit(char *p,int count[10]){
    while(*p != '\0'){
        if(*p>='0' && *p<='9'){
            count[(*p)-'0']++;
        }
        p++;
    }
}