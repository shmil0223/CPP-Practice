#include<iostream>
using namespace std;
int S[14],H[14],C[14],D[14];
int main(){
    int n,number;
    char type;
    cin>>n;
    for(int i = 0;i < n;i++){
        cin>>type>>number;
        if(type == 'S'){
            for(int j = 1;j <= 13;j++){
                if(j == number) S[j] = 1;
            }
        }
        
        else if(type == 'H'){
            for(int j = 1;j <= 13;j++){
                if(j == number) H[j] = 1;
            }
        }
        
        else if(type == 'C'){
            for(int j = 1;j <= 13;j++){
                if(j == number) C[j] = 1;
            }
        }
        
        else {
            for(int j = 1;j <= 13;j++){
                if(j == number) D[j] = 1;
            }
        }
    }

    
    for(int j = 1;j <= 13;j++){
        if(S[j] == 0) cout<<"S "<<j<<endl;
    }

    for(int j = 1;j <= 13;j++){
        if(H[j] == 0) cout<<"H "<<j<<endl;
    }

    for(int j = 1;j <= 13;j++){
        if(C[j] == 0) cout<<"C "<<j<<endl;
    }

    for(int j = 1;j <= 13;j++){
        if(D[j] == 0) cout<<"D "<<j<<endl;
    }

    return 0;


}