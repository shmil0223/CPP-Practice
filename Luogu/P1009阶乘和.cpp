//高精度加法+半高精度乘法
#include<iostream>
#include<algorithm>
using namespace std;
string plusNum(const string& a,const string& b){
    int i = a.length() - 1;
    int j = b.length() - 1;
    int carry = 0;
    string res;
    while(i>=0 || j>=0 ||carry){
        int digit1 = (i>=0)?(a[i--]-'0'):0;
        int digit2 = (j>=0)?(b[j--]-'0'):0;
        int sum = digit1 + digit2 + carry;
        carry = sum/10;
        res += char(sum %10 + '0');
    }
    reverse(res.begin(),res.end());
    return res;
}

string multiSum(const string& a,int k){
    int i = a.length() - 1;
    int carry = 0;
    string res;
    while(i>=0 || carry){
        int digit = (i>=0)?(a[i--]-'0'):0;  // 将字符转换为对应的整数值,而且注意此次也需要判断
        int sum = k * digit + carry;
        carry = sum/10;
        res += char(sum % 10 + '0');
    }
    if(carry != 0) res += char(carry + '0');
    reverse(res.begin(),res.end());
    return res;
}

int main(){
    int N;
    cin>>N;
     if(N <= 0){
        cout << "0" << endl;
        return 0;
    }
    string sum = "0";
    string jieCheng = "1";
    for(int i = 1;i<=N;i++){
        jieCheng = multiSum(jieCheng,i);
        sum = plusNum(sum,jieCheng);
    }
    cout<<sum<<endl;
    return 0;
}