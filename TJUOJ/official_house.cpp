#include<iostream>
#include<vector>
using namespace std;
vector<vector<vector<int>>> B(5);
int main(){
    for(int i = 1;i<=4;i++){
        B[i].assign(4,vector<int>(11,0));
    }
    int n;
    cin>>n;
    int b,f,r,v;
    while(n--){
        cin>>b>>f>>r>>v;
        if(b>=1&&b<=4&&f>=1&&f<=3&&r>=1&&r<=10){
            B[b][f][r] += v;
        }
    }
    for(int i = 1;i<=4;i++){
        for(int j = 1;j<=3;j++){
            for(int k = 1;k<=10;k++){
                cout<<" "<<B[i][j][k];
            }
            cout<<endl;
        }
        if(i!=4)    cout<<"####################"<<endl;
    }
    return 0;
}