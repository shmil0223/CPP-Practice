//important
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void replacestr(string& str,int n,int m,string p){
    str.replace(n,m - n + 1,p);//注意是m - n + 1，第二个是长度不是下标
    //string的replace函数用法：str.replace(pos, len, newStr);
    //pos是起始位置，len是要替换的长度，newStr是新的字符串
    //一般的replace用法是查找区间内指定的子串进行替换
}
void reversestr(string& str,int n,int m){
   reverse(str.begin()+n,str.begin()+m+1);//注意是m+1，返回的是尾后迭代器
}
void printstr(const string& str,int n,int m){
    for(int i = n;i<=m;i++){
        cout<<str[i];
    }
    cout<<endl;//添加换行
}
int main(){
    string str,ope,p;
    int N,n,m;
    cin>>str>>N;
    while(N--){
        cin>>ope>>n>>m;
        if(ope == "replace"){
            cin>>p;
            replacestr(str,n,m,p);
        }
        else if(ope == "reverse") reversestr(str,n,m);
        else printstr(str,n,m);
    }
    return 0;
}