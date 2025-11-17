#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    double x, y;
    cout << "请输入x的值: ";
    cin >> x;
    if (x > 0 && x < 1) 
    {
        y = 3 - 2 * x;
        cout << "计算结果: y = " << y << endl;
    }
    else if (x >= 1 && x < 5) {
        y = 2.0 / (4 * x) + 1;  
        cout << "计算结果: y = " << y << endl;
    }
    else if (x >= 5 && x < 10)
    {
        y = x * x;
        cout << "计算结果: y = " << y << endl;
    }
    else
        cout << "x = " << x << " 不在定义域内" << endl;
    return 0;
}