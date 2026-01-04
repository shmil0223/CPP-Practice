#include<iostream>
using namespace std;
int a[1000][1000];
int main(){
    int m,n,k;
    cin>>m>>n;
    for(int i = 0 ; i<m ; i++){
        for(int j = 0 ; j<n ; j++){
            cin>>a[i][j];
            
        }
    }
    
    
    cin>>k;
    int res = 0;
    for(int i = 0 ; i<m-k+1 ; i++){
        for(int j = 0 ; j<n-k+1 ; j++){
        	int temp = 0;
        	for(int p = 0;p<k;p++){
        		for(int q = 0;q<k;q++){
        			temp += a[i+p][j+q];
//        			cout<<a[i+p][j+q]<<" ";
//        			cout<<temp<<endl;
				}
			}
//			cout<<temp<<endl;
            if(temp > res) res = temp;
        }
    }
    cout<<res<<endl;
    return 0;
}