#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "请输入一个实数：";
	float x;
	cin >> x ;
	int a;
	a = int(x);
	cout << "这个实数转换为int后为：" << a << endl;
	return 0;
}
