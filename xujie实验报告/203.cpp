#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    cout << "请输入三角形的三条边：" << endl;
    cout << "边a: ";
    cin >> a;
    cout << "边b: ";
    cin >> b;
    cout << "边c: ";
    cin >> c;
    if (a > 0 && b > 0 && c > 0 &&
        a + b > c && a + c > b && b + c > a) 
    {
        double perimeter = a + b + c;
        cout << "三角形的周长为: " << perimeter << endl;
        if (a == b || a == c || b == c) 
            cout << "这是一个等腰三角形" << endl;
        else
            cout << "这不是一个等腰三角形！" << endl;
    }
    else 
        cout << "这三条边不能构成一个三角形！" << endl;
        cout << "三角形的所有边长为正数，且任意两边之和大于第三边！" << endl;
    return 0;
}