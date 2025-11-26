#include<iostream> 
// include iostream library #开头的是命令行 
// .h结尾的为库文件
using namespace std;
//分号结束叫做语句 standard标准 标准命名空间，
//如果没有这句话，上面那句需要加入iostream.h
//加注释ctrl+/  
int main(){
    //int是函数返回值类型，main是函数名
    //()是参数列表，{}是函数体
    string a;
    cin>>a;
    cout<<"Hello "<<a<<endl;
    //""是字符串，''是字符
    return 0;
    //命名规范：
    //1.变量名和函数名只能包含字母、数字、下划线，且不能以数字开头
    //2.不能使用C++关键字和标准库中的标识符
    //3.变量名和函数名区分大小写
    //4.变量名和函数名不能重复
    //5.变量名和函数名要有意义，不能太长
    //6.变量名和函数名要遵循驼峰命名法

    //输入多个：空格或者回车隔开
    //不能够cin>>"input">>a;这样是错误的
    

    //常量是const修饰的变量：在执行时替换
    const char NEWLINE = '\n';//\n是一个字符
    cout<<"Hello World!"<<NEWLINE;

    //宏定义：在编译的时候替换，而且可以不用加类型
    #define PI 3.14159
    cout<<PI<<endl;

    //Byte字节 bit二进制位 Byte=8bit  内存的基本单位是Byte
    //1KB=1024B 1MB=1024KB 1GB=1024MB
    //1TB=1024GB 1PB=1024TB

    //学习有无符号数，各种数据类型的表示范围和存储大小
    //long double 10B
    //double 8B
    //float 4B  
    //unsigned long 4B
    //long 4B
    //unsigned int 4B
    //int 4B
    //char 1B
}