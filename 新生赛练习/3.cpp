#include<iostream>
#include<cmath>
#include<unordered_map>
#include<algorithm>
#include<string>
using namespace std;
unordered_map<char,int> nums1 = {
	{'0',0},{'1',1},{'2',2},{'3',3},{'4',4},{'5',5},{'6',6},{'7',7},
	{'8',8},{'9',9},{'a',10},{'b',11},{'c',12},{'d',13},{'e',14},{'f',15}
};
unordered_map<int,char> nums2 = {
	{0,'0'},{1,'1'},{2,'2'},{3,'3'},{4,'4'},{5,'5'},{6,'6'},{7,'7'},
	{8,'8'},{9,'9'},{10,'a'},{11,'b'},{12,'c'},{13,'d'},{14,'e'},{15,'f'}
};
int main(){
	string a,b;
	cin>>a>>b;
	int A=0,B=0;
	for(int i = a.length()-1;i>=0;i--){
		A += nums1[a[i]] * pow(16,a.length()-i-1);
	}
	
	for(int i = b.length()-1;i>=0;i--){
		B += nums1[b[i]] * pow(16,b.length()-i-1);
	}
	
	int res = A - B;
	string result = "";
	int i = 0;
	while(res){
		result +=nums2[res%16];
		res /= 16;
	}
	reverse(result.begin(),result.end());
	cout<<result<<endl;
	return 0;
}