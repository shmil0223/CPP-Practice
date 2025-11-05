#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int N;
    cin>>N;
    unordered_map<string,pair<string,int>> stu;
    while(N--){
        int score;
        string number,name;
        cin>>number>>name>>score;
        stu[number] = {name,score};
    }
    int Q;
    cin>>Q;
    while(Q--){
        string number;
        cin>>number;
        cout<<stu[number].first<<" "<<stu[number].second<<endl;
    }
    return 0;
}