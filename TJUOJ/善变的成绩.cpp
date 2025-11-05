#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

struct stu{
    int score[6];
    int flag = 0;
};
int main(){
    int N,Q;
    cin>>N>>Q;
    vector<stu> stus;
    for(int i = 0;i<N;i++){
        struct stu temp;
        for(int j = 1;j<=5;j++)
            cin>>temp.score[j];
        if(i == 0) temp.flag = 1;
        stus.push_back(temp); 
    }
    int o[6];
    for(int i = 1;i <= Q;i++){
        for(int j = 1;j<=5;j++){
            cin>>o[j];
        }
        sort(stus.begin(),stus.end(),[&](const stu& s1,const stu& s2){
            for(int k = 1;k<=5;k++){
                if(s1.score[o[k]] != s2.score[o[k]]){
                    return s1.score[o[k]] > s2.score[o[k]];
                }
            }
            return s1.flag > s2.flag;
        });
        for(int t = 0;t<N;t++){
            if(stus[t].flag == 1){
                cout<<t+1<<endl;
                break;
            }
        }
    }
    return 0;
}