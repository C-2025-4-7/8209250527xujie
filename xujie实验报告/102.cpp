#include<iostream>
#include<iomanip>
using namespace std;
const double PI = 3.1415926535;
int main()
{
	double R, H, V;
	cout << "圆锥体积计算器" << endl;
	cout << "请输入圆锥底面半径:" ;
	cin >> R;
	cout << "请输入圆锥的高:" ;
	cin >> H;
	V = (R * R * H * PI) / 3;
	cout << "计算结果：圆锥的体积为" << V << endl;
	return 0;
}