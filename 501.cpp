#include <iostream>
using namespace std;

class Time             // 定义Time类
{
private:               // 数据成员改为私有的
    int hour;
    int minute;
    int sec;

public:               // 成员函数为公用的
    // 输入时间
    void setTime() {
        cin >> hour >> minute >> sec;
    }

    // 输出时间
    void showTime() {
        cout << hour << ":" << minute << ":" << sec << endl;
    }
};

int main()
{
    Time t1;           // 定义t1为Time类对象
    t1.setTime();      // 调用成员函数输入时间
    t1.showTime();     // 调用成员函数输出时间
    return 0;
}