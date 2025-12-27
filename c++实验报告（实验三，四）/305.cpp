/*猴子吃桃：猴子第一天摘若干桃子，当即吃了一半，还不过瘾，又吃了一个。第二天又将剩下的桃子吃
掉一半，又多吃一个，以后每天如此，到第10天，发现只剩最后一个桃子，问，第一天猴子共摘多少桃子
（用递归实现）。*/

#include <iostream>
using namespace std;

// 递归函数：计算第n天的桃子数量
int peach(int day) {
    // 第10天只剩1个桃子
    if (day == 10) {
        return 1;
    }
    // 递归关系：第n天的桃子数 = (第n+1天的桃子数 + 1) × 2
    return (peach(day + 1) + 1) * 2;
}

int main() {
    int Day1 = peach(1);
    cout << "第一天猴子摘了 " << Day1 << " 个桃子" << endl;

    return 0;
}