#include<iostream>
#include<cmath>

using namespace std;
double fun(int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        if(i % 5 == 0 && i % 11 == 0 ){
            sum += i;
        }
    }
    return sqrt(sum*1.0);

}
int main(){
    double n;
    do{
        cin>>n;
    }while(!(n>=0 && abs(n-round(n))<1e-9));
    cout<<fun(n);
    return 0;
}