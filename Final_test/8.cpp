#include <iostream>
using namespace std;

void del_dchar(char *p, int i) {
    for (int j = i; p[j] != '\0'; j++) {
        p[j] = p[j + 1];
    }
}

int main() {
    char s[80];
    cin.getline(s, 80);
    bool flag = false;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            del_dchar(s, i);
            i--;
            flag = true;
        }
    }
    if (flag) {
        cout << s << endl;
    } else {
        cout << "输入的字符串无数字!" << endl;
    }
    return 0;
}