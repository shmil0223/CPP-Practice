#include<iostream>
#include<cmath>
using namespace std;
int main(){
	string a;
	cin>>a;
	for(int k = 2;k <= 10;k++){
		int sum = 0;
		bool flag = 0;
		for(int i = a.length()-1;i>=0;i--){
			if(a[i] - '0' > k-1){
				flag = 1;
				break;
			}
			sum += (a[i]-'0') * pow(k,a.length()-i-1);
		}
		if(sum % (k-1) == 0 && flag == 0){
			cout<<k<<endl;
			return 0;
		}
	}
	for(int k = 11;k <= 36;k++){
		int sum = 0;
		bool flag = 0;
		for(int i = a.length()-1;i>=0;i--){
			if(a[i] - 'A' + 10> k-1){
				flag = 1;
				break;
			}
			if(a[i] >= 48 && a[i] <= 57){
				sum += (a[i]-'0') * pow(k,a.length()-i-1);
			}
			if(a[i] >= 65 && a[i] <= 90){
				sum += (a[i]-'A'+10) * pow(k,a.length()-i-1);
			}
		}
		if(sum % (k-1) == 0 && flag == 0){
			cout<<k<<endl;
			return 0;
		}
	}
	cout<<"No Solution"<<endl;
	return 0;
}