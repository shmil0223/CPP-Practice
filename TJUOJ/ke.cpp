//important 学习结构体 运算符重载 排序 哈希表等知识点
#include<iostream>
#include<fstream>
#include<unordered_map>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//分别定义正向哈希表和反向哈希表
//正向哈希表：月份字符串->月份数字
//反向哈希表：月份数字->月份字符串  
static unordered_map<string,int> Month1 = {
    {"Jan", 1}, {"Feb", 2}, {"Mar", 3}, {"Apr", 4},
    {"May", 5}, {"Jun", 6}, {"Jul", 7}, {"Aug", 8},
    {"Sept", 9}, {"Oct", 10}, {"Nov", 11}, {"Dec", 12}
};

static unordered_map<int, string> Month2 = {
    {1, "Jan"}, {2, "Feb"}, {3, "Mar"}, {4, "Apr"},
    {5, "May"}, {6, "Jun"}, {7, "Jul"}, {8, "Aug"},
    {9, "Sept"}, {10, "Oct"}, {11, "Nov"}, {12, "Dec"}
};


//定义结构体date    
struct date{
    int month,day;
};

//重载<运算符，方便排序和比较,同时注意此处的全局重载要写在结构体定义之后
bool operator<(date day1,date day2){
    if(day1.month < day2.month) return true;
    else if(day1.month == day2.month && day1.day < day2.day) return true;
    return false;
}

//分别得到月份数字和日期数字的函数  
int month_num(string month){
    return Month1[month];
}
int day_num(string day){
    string temp = day.substr(0,day.length()-2);
    return stoi(temp);
}

//得到带有序数后缀的日期字符串函数
string get_day(int day){
    if(day == 1 ||day == 21 ||day == 31) return to_string(day) + "st";
    else if(day == 2 ||day == 22) return to_string(day) + "nd";
    else if(day == 3 ||day == 23) return to_string(day) + "rd";
    else return to_string(day) + "th";
}


int main(){
    ifstream ifs("ke.in");
    ofstream ofs("ke.out");
    int T;
    ifs>>T;
    for(int i=1;i<=T;i++){
        int n;
        ifs>>n;
        vector<date> days;
        for(int j = 0;j<n;j++){
            string month,day;
            ifs>>month>>day;
            struct date Day;
            Day.month = month_num(month);
            Day.day = day_num(day);
            days.push_back(Day);
        }
        
        sort(days.begin(),days.end());//sort函数默认调用<运算符重载
        
        string tomonth,today;
        ifs>>tomonth>>today;
        struct date Today;
        Today.month = month_num(tomonth);
        Today.day = day_num(today);

        int flag = 0;//标记有没有日期
        int res;
        //找到第一个大于今天的日期
        for(int k = 0;k<days.size();k++){
            if(Today < days[k]){
                res = k;
                flag = 1;
                break;
            }
        }
        if(flag == 0) ofs<<"Case #"<<i<<": "<<"See you next year"<<endl;
        else{
            ofs<<"Case #"<<i<<": "<<Month2[days[res].month]<<" "<<get_day(days[res].day)<<endl;
        }
        
    }
    ifs.close();
    ofs.close();
    return 0;
}