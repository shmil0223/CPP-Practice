#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int T;
    string m,n;
    cin>>T;
    vector<int> M,N;
    for(int i = 0;i < T;i++){
        cin>>m>>n;
        for(int i = 0;i<m.length();i++) M.push_back(m[m.length() - 1 - i] - '0');
        for(int i = 0;i<n.length();i++) N.push_back(n[n.length() - 1 - i] - '0');

        // while(m != 0){
        //     M.push_back(m % 10);
        //     m /= 10;
        // }
        // while(n != 0){
        //     N.push_back(n % 10);
        //     n /= 10;
        // }
        
        int sum = 0;
        int carry = 0;
        for(int i = 0;i<max(m.length(),n.length());i++){
            int a = (i < m.length()) ? M[i] : 0;
            int b = (i < n.length()) ? N[i] : 0;
            if(carry + a + b > 9) {
                carry = 1;
                sum++;
            }
            else {
                carry = 0;
            }
        }
        cout<<sum<<endl; 
        M.clear();
        N.clear();
    
}
    return 0;
}
/*反思：
相当于高精度加法，注意模版格式，这道题得多看几遍
1、必须要用字符串类型存入，因为可能有像99999999999999999999999999这样的数
2、学习如何将每一位存进数组
3、注意循环中位数的解决方法，使用max(m.length(),n.length())
4、注意进位carry的使用，不能直接检查到小于9就break，因为可能还有进位
5、注意每次循环后要清空M和N数组，由于要清空，所以使用vector更加方便
*/