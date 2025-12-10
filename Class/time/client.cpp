#include <iostream>
#include "time.h"

using namespace std;

int main() {
    // 使用带参数的构造函数
    Time t1(10, 30, 5);
    cout << "Time 1: ";
    t1.Write();

    // 使用默认构造函数
    Time t2;
    cout << "Time 2 (default): ";
    t2.Write();

    // 测试 Set 函数
    t2.Set(23, 59, 59);
    cout << "Time 2 (after Set): ";
    t2.Write();

    // 测试 Increment 函数
    t2.Increment();
    cout << "Time 2 (after Increment): ";
    t2.Write();

    // 测试 Equal 函数
    if (t1.Equal(t2)) {
        cout << "Time 1 is equal to Time 2" << endl;
    } else {
        cout << "Time 1 is not equal to Time 2" << endl;
    }

    return 0;
}
