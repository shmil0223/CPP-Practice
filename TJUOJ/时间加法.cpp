//important
#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
vector<int> to_int (string str){
    vector<int> result;
    int temp = stoi(str.substr(6,2));
    result.push_back(temp);
    temp = stoi(str.substr(3,2));
    result.push_back(temp);
    temp = stoi(str.substr(0,2));
    result.push_back(temp);
    return result;
}
int main(){
    int T;
    string str1,str2;
    cin>>T;
    while(T--){
        cin>>str1>>str2;
        vector<int> time1 = to_int(str1);
        vector<int> time2 = to_int(str2);
        vector<int> result;
        int carry=0;
        for(int i = 0;i<3;i++){
            int temp = time1[i] + time2[i] + carry;
            if(temp<60 || i==2){
                result.push_back(temp);
                carry = 0;
            }
            else{
                result.push_back(temp % 60);
                carry = 1;
            }
        }
        cout<<setw(2)<<setfill('0')<<result[2]<<":"<<setw(2)<<setfill('0')<<result[1]<<":"<<setw(2)<<setfill('0')<<result[0]<<endl;
    }
    return 0;
}