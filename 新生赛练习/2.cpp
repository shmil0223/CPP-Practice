#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;
	cin>>a;
	int scores = 0;
	for(int i = 0;i<a.length();i++){
		if(a[i] == '9'){
			scores += 4;
		}
	}
	int sum = 0;
	size_t pos = 0;
	while((pos=a.find("123456789",pos)) != string::npos){
		++sum;
		pos+=9;
	}
	scores += sum*6;
	cout<<scores<<endl;
	return 0;
}