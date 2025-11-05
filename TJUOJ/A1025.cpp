#include <iostream>
#include <algorithm>
//#include <string>
using namespace std;

int main() {
    string s;
    while (true) {
        cin >> s;
        if (s == "000") break;
        if (s.size() != 3) continue; // 只处理三个字母的输入
        sort(s.begin(), s.end());    // 按 ASCII 值排序
        cout << s[0] << " " << s[1] << " " << s[2] << endl;
    }
    return 0;
}
/*反思：1、使用字符串可以更方便地处理字符，避免了使用二维数组手动拆分数字的麻烦，
而且二维数组实现的只是连续输入三个整数的情况
这道题的难点在于输入的字符之间没有空格，用字符串处理更简洁，if (s.size() != 3) continue
2、使用 sort 函数简化了排序过程，不必使用冒泡排序的三行式子，但是注意 <algorithm> 头文件
3、另一个难点是 用ASCII值排序，sort函数默认按ASCII值排序，直接使用即可
4、连续进行，直到break，使用while(true)循环,比for循环简单
*/

