#include<iostream>
using namespace std;
int main()
{
    char* str = nullptr;
    char a[] = "world";
    //方法一；
    str = a;//数组名即为首元素的指针
    cout << *str << endl;   // 输出 'w'
    cout << str << endl;   // 输出 "world"

    //方法二；
    str = &a[0];//取数组首元素的地址
    cout << *str << endl; // 输出 'w'
    for(int i=0;i<5;i++)
    {
        cout << *(str + i); // 输出 'world'
    }
    cout << endl;
    return 0;
}