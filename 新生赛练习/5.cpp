#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cin>>n;
	int w[n];
	for(int i = 0;i < n;i++){
		cin>>w[i];
	}
	double res = 0;
	for(int i = 0;i<n-1;i++){
		for(int j = i+1;j<n;j++){
			double temp = (double)(w[j] - w[i])/(j-i);
			if(temp > res){
				res = temp;
			}
		}
	}
	cout<<fixed<<setprecision(5)<<res<<endl;
	return 0;
}