#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
struct stu{
    string name;
    int score[5];
    double jiaquan;
};
struct xuefen{
  	int order,val;  
};

int main(){
    int sum = 0;
    vector<xuefen> xuefens;
    for(int i=1;i<=5;i++){
        struct xuefen temp;
        cin>>temp.val;
        temp.order = i-1;
        sum += temp.val;
        xuefens.push_back(temp);
    }
    
    int n;
    cin>>n;
    vector<stu> stus;
    for(int i = 1;i<=n;i++){
        struct stu temp;
        double jiaQuan = 0;
        cin>>temp.name;
        for(int j = 0;j<5;j++){
            cin>>temp.score[j];
            jiaQuan += xuefens[j].val*temp.score[j];
        }
        temp.jiaquan = jiaQuan*1.0/sum;
        stus.push_back(temp);
    }
    
    sort(xuefens.begin(),xuefens.end(),[](const xuefen& f1,const xuefen& f2){
        return f1.val > f2.val;
    });
    
    
    sort(stus.begin(),stus.end(),[&](const stu& s1,const stu& s2){
        if(s1.jiaquan != s2.jiaquan) return s1.jiaquan > s2.jiaquan;
        else if(s1.jiaquan == s2.jiaquan){
            for(int k = 0;k < 5;k++){
                if(s1.score[xuefens[k].order] != s2.score[xuefens[k].order]){
                    return s1.score[xuefens[k].order] > s2.score[xuefens[k].order];
                }
            }
        }
        return false;
    });

    for(int t = 0;t<stus.size();t++){
        cout<<stus[t].name<<" "<<fixed<<setprecision(2)<<stus[t].jiaquan<<endl;
    }
    return 0;
}