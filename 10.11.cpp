//不同数据类型分配存储空间不同，运算规律不同
//溢出分为上溢和下溢    overflow  underflow
#include <iostream>
#include <climits> //包含各种数据类型的极限值
using namespace std;    
int main(){
    //整型除法 5/2 == 2;
    //实型除法 5.0/2 == 2.5;
    /*有隐式类型转换
    1、将存储空间小的转换为存储空间大的
    2、按照那个表格从上往下转换
    3、如果是无符号数和有符号数混合运算，先将有符号数转换为无符号数
    */  
   
    /*强制类型转换
    1、C风格的强制类型转换 (type)value  也叫做显示类型转换
    2、static_cast<type>(value)
    */
    //注意：类型转换后赋值并不会改变变量本身的类型


    

    /*int a = 5;
    cout<<++a; 输出6
    cout<<a++; 输出5
    在运算中例如*，要按照表达式的值进行运算；
    */


    cout<<5.0/2<<endl;
    return 0;
}