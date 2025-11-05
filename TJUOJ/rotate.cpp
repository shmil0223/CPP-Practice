#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
int main(){
    int n,q,temp,step;
    cin>>n;
    vector<int> v1,v2;
    for(int i = 0; i < n;i++){
        cin>>temp;
        v1.push_back(temp);
    }
    cin>>q;
    int b,m,e;
    for(int j = 0; j < q;j++){
        cin>>b>>m>>e;
        v2 = v1;
        for(int k = 0;k < e-b;k++){
           step = (k + e - m )% (e - b);
           v1[b + step] = v2[b + k];
       }
    }
    for(vector<int>::iterator it = v1.begin();it != v1.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}

*/

int main(){
    int n,q,b,m,e;
    cin>>n;
    vector<int> v;
    for(int i = 0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    cin>>q;
    for(int i = 0;i<q;i++){
        cin>>b>>m>>e;
        rotate(v.begin()+b,v.begin()+m,v.begin()+e);
    }
    for(auto it = v.begin();it != v.end();it++){
        cout<<*it;
        if(it != v.end() - 1) cout<<" ";
    }
    cout<<endl;
    return 0;
}

/*反思：
1、使用STL中的rotate函数，需要记忆，记得加头文件<algorithm>；
2、注意题目给出的数学公式的理解；
3、特别注意中间的转折点m，是属于前半部分还是属于后半部分，可以带入k=m-b验证，
发现k=m-b时，b + ((m?b + e?m) mod (e?b)) = b + ((e?b) mod (e?b)) = b + 0 = b
是转化后的第一个元素，说明m属于后半部分；
4、对题目给的数学公式的理解：其中e-b表示区间的长度,取模运算是指在该区间内循环
e-m是指后半部分的长度，同时也是前半部分向后移动的位数；
(k + e - m)表示将第k个元素向后移动了e-m个位置，
(k + e - m) % (e - b)表示在区间内循环移动

*/
