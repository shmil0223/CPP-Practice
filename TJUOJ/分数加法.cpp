#include<iostream>
#include<numeric>
using namespace std;
int main(){
    int N,n1,m1,n2,m2,up,down;
    cin>>N;
    while(N--){
        cin>>n1>>m1>>n2>>m2;
        int temp1 = m1,temp2 = m2;
        m1 *= temp2;
        n1 *= temp2;
        m2 *= temp1;
        n2 *= temp1;
        up = n1 + n2;
        down = m1;
        int c = gcd(up,down);
        up /= c;
        down /= c;
        cout<<up<<" "<<down<<endl;
    }
    return 0;
}