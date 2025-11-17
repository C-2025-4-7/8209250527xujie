#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "请输入华氏温度（℉）：";
	double H, A;
	cin >> H;
	if (H < -459.67)
		cout << "华氏度不可低于-459.67！" << endl;
	else
		A = (H - 32) * 5 / 9;
	    cout << "对应摄氏温度(℃）为：" << A << endl;
	return 0;
}