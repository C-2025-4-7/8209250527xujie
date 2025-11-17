#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double pricePerApple = 0.8; // 每个苹果0.8元
    int totalApples = 0; // 总苹果数
    double totalCost = 0.0; // 总花费
    int days = 0; // 总天数
    int applesToday = 2; // 第一天买2个

    cout << "苹果购买情况分析：" << endl;
    cout << "====================" << endl;

    // 循环购买，直到当天购买数超过100
    while (applesToday <= 100) {
        days++;
        totalApples += applesToday;
        double costToday = applesToday * pricePerApple;
        totalCost += costToday;

        // 以分情况讨论形式输出每天购买信息
        cout << "第" << days << "天情况：" << endl;
        cout << "- 购买苹果数量: " << applesToday << "个" << endl;
        cout << "- 当天花费: " << fixed << setprecision(2) << costToday << "元" << endl;
        cout << "- 累计苹果数量: " << totalApples << "个" << endl;
        cout << "- 累计总花费: " << fixed << setprecision(2) << totalCost << "元" << endl;
        cout << endl;

        // 计算下一天的购买数（前一天的2倍）
        applesToday *= 2;
    }

    // 计算平均每天花费
    double averageCostPerDay = totalCost / days;

    // 以分情况讨论形式输出最终结果
    cout << "====================" << endl;
    cout << "最终统计结果：" << endl;
    cout << "1. 购买总天数: " << days << "天" << endl;
    cout << "2. 购买苹果总数: " << totalApples << "个" << endl;
    cout << "3. 购买总花费: " << fixed << setprecision(2) << totalCost << "元" << endl;
    cout << "4. 平均每天花费: " << fixed << setprecision(2)
        << averageCostPerDay << "元" << endl;

    // 分析说明
    cout << endl;
    cout << "情况分析说明：" << endl;
    cout << "- 第一天购买2个苹果，花费" << fixed << setprecision(2) << 2 * pricePerApple << "元" << endl;
    cout << "- 从第二天开始，每天购买数量是前一天的2倍" << endl;
    cout << "- 当购买数量超过100个时停止购买" << endl;
    cout << "- 第" << days + 1 << "天需要购买" << applesToday << "个苹果，超过了100个，所以停止购买" << endl;

    return 0;
}