#include<iostream>
using namespace std;
int main(){
    string deck;
    int m,h;
    while(true){
        cin>>deck;
        if(deck == "-") break;
        cin>>m;
        int length = deck.length();
        for(int i = 0;i<m;i++){
            cin>>h;
            string subStr = deck.substr(0,h);
            deck.erase(0,h);
            deck += subStr;
        }
        cout<<deck<<endl;
    }
    return 0;
}