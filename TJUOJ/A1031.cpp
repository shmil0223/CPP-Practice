#include <iostream>
using namespace std;
/*
//题目：
void call(int n){
    int i = 1;
    CHECK_NUM:
    int x = i;
    if ( x % 3 == 0 ){
        cout <<  " " << i;
        goto END_CHECK_NUM;
    }


    INCLUDE3:
    if ( x % 10 == 3 ){
        cout << " " << i;
        goto END_CHECK_NUM;
    }
    x /= 10;
    if ( x ) goto INCLUDE3;


    END_CHECK_NUM:
    if ( ++i <= n ) goto CHECK_NUM;
    cout << endl;
}
int main(){
    int n;
    while ( cin >> n && n ){
        call(n);
    }
    return 0;
}
*/

int main(){
    int n;
    cin>>n;
    for(int i = 1;i <= n;i++){
        if(i % 3 == 0){
            cout<<' '<<i;
            continue;
        }
        int x = i;
        while(x){
            if(x % 10 == 3){
                cout<<' '<<i;
                break;
            }
            x /= 10;
        }
    }
    cout<<endl;
    return 0;
}
//反思；用x把i的值复制一份出来之后，
//但是打印的时候要打印i的值，而不是x的值  