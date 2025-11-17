#include <iostream>
using namespace std;
int 计算最大公约数(int a, int b);
int 计算最小公倍数(int a, int b, int gcd);

int 计算最大公约数(int a, int b)
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int 计算最小公倍数(int a, int b, int gcd)
{
    return (a * b) / gcd;
}
int main() {
    int a, b;
    cout << "请输入第一个正整数: ";
    cin >> a;
    cout << "请输入第二个正整数: ";
    cin >> b;
    if (a <= 0 || b <= 0) 
    {
        cout << "错误：请输入正整数！" << endl;
        return 1;
    }
    int gcd = 计算最大公约数(a, b);
    int lcm = 计算最小公倍数(a, b, gcd);
    cout << "最大公约数: " << gcd << endl;
    cout << "最小公倍数: " << lcm << endl;
    return 0;
}
