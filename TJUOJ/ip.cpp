#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int k = 0;k<n;k++){
        string ip;
        cin>>ip;
        int result[4];
        memset(result,0,sizeof(result));
        for(int i = 0;i<4;i++){
            string subStr = ip.substr(8*i,8);
            int temp = stoi(subStr,nullptr,2);
            for(int j = 0;j<8;j++){
                result[i] += (temp & 1)*pow(2,j);
                temp >>= 1;
            }
        }
        for(int i = 0;i<3;i++){
            cout<<result[i]<<".";
        }
        cout<<result[3]<<endl;
    } 
    return 0;
}