#include<iostream>
#include<unordered_map>
using namespace std;

// 非闰年每个月的天数
unordered_map<int, int> modays = {
    {1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30},
    {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}
};

// 判断年份是否为闰年
bool is_leap_year(int y) {
    if (y % 4 == 0) {
        if (y % 100 == 0) {
            if (y % 400 == 0) {
                return true;  // 能被400整除的是闰年
            }
            return false; // 能被100整除但不能被400整除的不是闰年
        }
        return true;  // 能被4整除但不能被100整除的是闰年
    }
    return false;  // 不能被4整除的不是闰年
}

// 计算某年某月某日的天数（不考虑年份的部分）
int month_days(int m, int d) {
    int res = 0;
    for (int i = 1; i < m; i++) {
        res += modays[i];
        // 如果是2月并且是闰年，需要多加一天
        if (i == 2 && is_leap_year(2000)) {
            res += 1;
        }
    }
    res += d;
    return res;
}

// 计算从2000年到某一日期的天数
int days_init(int y, int m, int d) {
    int res = 0;

    // 计算从2000年到y-1年的天数
    for (int year = 2000; year < y; year++) {
        res += 365;  // 普通年份加365天
        if (is_leap_year(year)) {
            res += 1;  // 闰年加1天
        }
    }

    // 加上目标年份的天数
    res += month_days(m, d);

    // 如果是闰年并且目标日期在2月之后，需要额外加一天
    if (is_leap_year(y) && m > 2) {
        res += 1;
    }

    return res;
}

int main() {
    int y[2], m[2], d[2];

    // 输入两个日期
    cin >> y[0] >> m[0] >> d[0];
    cin >> y[1] >> m[1] >> d[1];

    // 输出两个日期之间的天数差
    cout << days_init(y[1], m[1], d[1]) - days_init(y[0], m[0], d[0]) << endl;
    return 0;
}
