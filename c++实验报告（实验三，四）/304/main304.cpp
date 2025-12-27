#include <iostream>
#include "mytriangle.h"

using namespace std;

int main() {
    double side1, side2, side3;

    // 读取三角形的三边长
    cout << "请输入三角形的三边长（用空格分隔）: ";
    cin >> side1 >> side2 >> side3;

    // 检查输入是否合法
    if (!is_valid(side1, side2, side3)) {
        cout << "错误：这三条边不能构成一个有效的三角形！" << endl;
        cout << "请确保所有边长都为正数且任意两边之和大于第三边！" << endl;
    }
    else {
        // 计算并输出面积
        double triangle_area = area(side1, side2, side3);
        cout << "三角形面积: " << triangle_area << endl;

    }

    return 0;
}