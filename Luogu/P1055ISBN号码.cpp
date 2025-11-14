#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main(){
    string isbn;
    cin>>isbn;
    int res = 0;
    int multi = 1;
    for(int i = 0;i<11;i++){
        if(isdigit(isbn[i])){
            res += (isbn[i] - '0') * multi;
            multi++;
        }
    }
    int last = res % 11;
    if(last == (isbn[12] == 'X' ? 10 : isbn[12] - '0')) cout<<"Right"<<endl;
    else{
        isbn[12] = (last == 10)?'X':(last + '0');
        cout<<isbn<<endl;
    }
    return 0;
}