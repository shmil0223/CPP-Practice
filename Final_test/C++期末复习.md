## 1 科学计数法

```C++
#include <iostream>

int main() {
    // 1.2 * 10^3 = 1200
    double a = 1.2e3;  
    
    // 5 * 10^-2 = 0.05
    double b = 5E-2;   
    
    // 错误示例：指数不能是小数
    // double c = 1.2e2.5; // 编译错误

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    
    return 0;
}
```

## 2 ASCII

0：48
A：65
a：97

