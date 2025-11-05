//高精度算法
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string plusNum(const string& f1,const string& f2){
    int i = f1.length()-1;
    int j = f2.length()-1;
    int carry = 0;
    string res;
    while(i>=0 ||j>=0||carry){
        int digit1 = (i>=0)?(f1[i--]-'0'):0;
        int digit2 = (j>=0)?(f2[j--]-'0'):0;
        int sum = digit1+digit2+carry;
        carry = sum/10;
        res += (char)(sum%10 + '0');
        
    }
    reverse(res.begin(),res.end());
    return res;
}

int main(){
    int N;
    cin>>N;
    if(N <= 0) {
        cout << 0 << endl;
        return 0;
    }
    vector<string> fb(N+1,"0");
    if(N >= 1) fb[1] = "1";
    if(N >= 2) fb[2] = "1";//这样写是为了防止越界
    if(N == 1) cout<<fb[1]<<endl;
    else if(N == 2) cout<<fb[2]<<endl;
    else{
        for(int i = 3;i<=N;i++){
            fb[i] = plusNum(fb[i-1],fb[i-2]);
        }
        cout<<fb[N]<<endl;
    }
    return 0;
}