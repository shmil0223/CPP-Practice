#include <iostream>
#include <cstdio>
using namespace std;

class Sport{
protected:
    int minutes, level;
public:
    Sport(int minutes, int level):
        minutes(minutes),
        level(level){
    }
    virtual string getDescription() = 0;
    virtual int getSportIntensity() = 0;
};



class SportRun: public Sport{
public:
    SportRun(int m, int l): Sport(m, l){}

    virtual string getDescription(){
        string res = "You're running for " + to_string(minutes) + " minute(s)";
        return res;
    }
    virtual int getSportIntensity(){
        int res = minutes / 10 * level;
        return res;
    }
};



class SportBicycle: public Sport{
public:
    SportBicycle(int m, int l): Sport(m, l){}
    virtual string getDescription(){
        string res = "You're riding for " + to_string(minutes) + " minute(s)";
        return res;
    }
    virtual int getSportIntensity(){
        int res = (minutes / 5) * (minutes / 5) * level;
        return res;
    }
};


int main()
{
    int op, m, l;
    Sport* sp;
    for(int i = 0; i < 100; i++){
        cin >> op >> m >> l;
        if(op == 1) sp = new SportRun(m, l);
        else sp = new SportBicycle(m, l);
        cout << sp -> getDescription() << endl;
        cout << sp -> getSportIntensity() << endl;
        delete sp;
    }
    return 0;
}


