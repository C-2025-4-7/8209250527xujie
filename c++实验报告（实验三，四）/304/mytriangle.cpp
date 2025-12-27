#include "mytriangle.h"
#include <cmath>

// 判断三边是否能构成三角形
bool is_valid(double a, double b, double c) {
    // 检查边长是否为正数
    if (a <= 0 || b <= 0 || c <= 0) {
        return false;
    }

    // 检查三角形不等式
    if (a + b <= c) {
        return false;
    }
    if (a + c <= b) {
        return false;
    }
    if (b + c <= a) {
        return false;
    }

    return true;
}

// 计算三角形面积（使用海伦公式）
double area(double a, double b, double c) {
    // 先验证三角形是否有效
    if (!is_valid(a, b, c)) {
        return 0.0;  // 无效三角形返回0
    }

    // 计算半周长
    double s = (a + b + c) / 2.0;

    // 计算面积
    return sqrt(s * (s - a) * (s - b) * (s - c));
}