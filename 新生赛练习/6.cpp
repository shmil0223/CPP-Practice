#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int query1(int x){
    cout<<"? 1 "<<x<<'\n';
    cout.flush();
    int r;
    cin>>r;
    return r;
}
int query2(int x){
    cout<<"? 2 "<<x<<'\n';
    cout.flush();
    int r;
    cin>>r;
    return r;
}

int main(){
   	srand(time(0));
    int n;
    cin>>n;
    int res;
    for(int i = 0;i<10;i++){
        int x=rand()%n + 1;
        int temp = query1(x);
        if(query2(temp) == 1){
        	res = temp;
        	break;
		}
    }
    cout<<"! "<<res<<endl;
    return 0;
}