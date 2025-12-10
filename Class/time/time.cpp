#include "time.h"
#include <iostream>
#include <iomanip> 

using namespace std;

// 带参数的构造函数
Time::Time(int initHrs, int initMins, int initSecs) : hrs(initHrs), mins(initMins), secs(initSecs) {
}

// 默认构造函数
Time::Time() : hrs(0), mins(0), secs(0) {
}

// Set 函数实现
void Time::Set(int hours, int minutes, int seconds) {
    hrs = hours;
    mins = minutes;
    secs = seconds;
}

// Increment 函数实现
void Time::Increment() {
    secs++;
    if (secs > 59) {
        secs = 0;
        mins++;
        if (mins > 59) {
            mins = 0;
            hrs++;
            if (hrs > 23) {
                hrs = 0;
            }
        }
    }
}

// Write 函数实现
void Time::Write() const {
    // 输出格式 HH:MM:SS
    cout << setfill('0') << setw(2) << hrs << ":"
         << setfill('0') << setw(2) << mins << ":"
         << setfill('0') << setw(2) << secs << endl;
}

// Equal 函数实现
bool Time::Equal(Time otherTime) const {
    return (hrs == otherTime.hrs && mins == otherTime.mins && secs == otherTime.secs);
}