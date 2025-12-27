#include <iostream>
using namespace std;

// 计算最大公约数
int calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

//计算最小公因数
void calculateLCM(int a, int b, int& gcd, int& lcm) {
    // 调用第一个函数计算最大公约数
    gcd = calculateGCD(a, b);

    // 计算最小公倍数 = a * b / 最大公约数
    // 使用long long防止大数溢出
    lcm = (long long)a * b / gcd;
}


int main() {
    int m, n;

    // 输入部分
    cout << "请输入两个自然数m和n：" << endl;
    cout << "m = ";
    cin >> m;
    cout << "n = ";
    cin >> n;

    cout << "*最大公约数*" << endl;

    // 调用函数计算最大公约数
    int gcd1 = calculateGCD(m, n);
    cout << m << " 和 " << n << " 的最大公约数是: " << gcd1 << endl;

    cout << "*同时计算最大公约数和最小公倍数*" << endl;

    // 声明变量
    int gcd2, lcm;

    // 调用函数计算最小公倍数
    calculateLCM(m, n, gcd2, lcm);

    //调用函数计算最大公因数
    int calculateGCD(int m, int n);

    // 输出结果
    cout << m << " 和 " << n << " 的最大公约数是: " << gcd2<< endl;
    cout << m << " 和 " << n << " 的最小公倍数是: " << lcm << endl;

    return 0;
}