#include <iostream>
using namespace std;

// 定义Point类
class Point {
private:
    int x;  // x坐标
    int y;  // y坐标

public:
    // 构造函数，初始化坐标为(60, 80)
    Point() {
        x = 60;
        y = 80;
    }

    // 修改坐标值的公有成员函数
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }

    // 输出坐标值的公有成员函数
    void display() {
        cout << "当前坐标为：(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // 创建Point对象
    Point p;

    // 显示初始坐标
    cout << "初始坐标：" << endl;
    p.display();

    // 修改坐标为(60+5, 80+10) = (65, 90)
    p.setPoint(5, 10);
    cout << "\n修改后的坐标：" << endl;
    p.display();

    // 再次修改坐标为(60-10, 80+20) = (50, 100)
    p.setPoint(-10, 20);
    cout << "\n再次修改后的坐标：" << endl;
    p.display();

    return 0;
}