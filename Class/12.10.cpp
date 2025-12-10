//Union: https://gemini.google.com/share/2c413189900d
//注意区分Union和Struct里外层的顺序问题，顺序不同作用不同

//ADT: Abstract Data Type  
// file:///./ADT.md

//class:静态属性和动态行为的结合体
//spacification和implementation相独立
//data member, function member
//Declaration-before-use rule does not apply to class members

//interface:接口

/*
// --- Time.h (头文件) ---
class Time {
public:
    // 这里只是“声明”，告诉编译器有这个功能
    void Write() const; 
    
    // 假设里面还有变量
    int hour;
    int minute;
};

// --- Time.cpp (源文件) ---
#include "Time.h"
#include <iostream>

// 这里是“定义”，写具体的代码逻辑
// 必须加上 Time::，这样函数内部才能访问 hour 和 minute
void Time::Write() const {
    std::cout << hour << ":" << minute << std::endl;
}
在 C++ 中，:: 被称为作用域解析运算符（Scope Resolution Operator）。
简单来说，它的作用是表明归属关系。


*/

//const用法 file:///./const理解.md

//client.cpp
//time.h
//time.cpp