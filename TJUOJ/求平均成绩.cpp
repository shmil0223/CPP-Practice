#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    double avg_student[n];
    double avg_lesson[m];
    for(int i = 0; i < n; i++) avg_student[i] = 0;
    for(int i = 0; i < m; i++) avg_lesson[i] = 0;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>a[i][j];
            avg_student[i] += a[i][j];
            avg_lesson[j] += a[i][j];
        }
    }
   	for(int i = 0;i<n;i++){
        avg_student[i] /= m;
        cout <<fixed<<setprecision(2)<<avg_student[i]<<" ";
    }
    cout<<endl;
    for(int i = 0;i<m;i++){
        avg_lesson[i] /= n;
        cout <<fixed<<setprecision(2)<<avg_lesson[i]<<" ";
    }
    cout<<endl;
    
    int sum = 0;
    for(int i = 0;i<n;i++){
        bool getIt = 1;
        for(int j = 0;j<m;j++){
            if(a[i][j] < avg_lesson[j]) getIt = 0;
        }
        if(getIt == 1) sum++;
    }
    cout<<sum;
    return 0;
}
//别忘了初始化avg_student和avg_lesson数组