#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double a;
    double x_n, x_n1;
    int iterations = 0;
    const double epsilon = 1e-10;
    cout << "使用迭代法计算平方根" << endl;
    cout << "请输入一个正数: ";
    cin >> a;
    if (a < 0) {
        cout << "错误：不能计算负数的平方根！" << endl;
        return 1;
    }
    if (a == 0) {
        cout << "0的平方根是0" << endl;
        return 0;
    }
    x_n = a / 2.0;
    cout << fixed << setprecision(10);
    cout << "\n迭代过程:" << endl;
    do
    {
        x_n1 = 0.5 * (x_n + a / x_n);
        iterations++;
        cout << "第" << iterations << "次迭代: " << x_n1 << endl;
        if (fabs(x_n1 - x_n) < epsilon) {
            break;
        }
        x_n = x_n1;
    } while (iterations < 1000);

    cout << "\n计算结果:" << endl;
    cout << "√" << a << " ≈ " << x_n1 << endl;
    cout << "标准库计算结果: " << sqrt(a) << endl;
    cout << "迭代次数: " << iterations << endl;
    cout << "误差: " << fabs(x_n1 - sqrt(a)) << endl;
    return 0;
}