#ifndef TIME_H
#define TIME_H

class Time {
public:
    void Set(int hours, int minutes, int seconds);  
    void Increment();
    void Write() const;
    bool Equal(Time otherTime) const;

    Time(int initHrs, int initMins, int initSecs);  
    Time();


private:
    int hrs;
    int mins;
    int secs;
};

#endif 