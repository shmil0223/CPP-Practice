#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n],b[n][m];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		cin>>b[i][j];
		}	
	}
	
	int res[m];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			res[i] = a[j] * b[j][i];
		}
	}
	for(int i = 0;i<m;i++){
		cout<<res[i]<<endl;
	}
	return 0;
}





