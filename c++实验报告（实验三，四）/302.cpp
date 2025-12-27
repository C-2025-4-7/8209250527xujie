#include <iostream>
#include <iomanip> //控制输出数字的格式
#include <cmath> //使用开平方根的字符sqrt
using namespace std;

// 判断素数的函数
bool is_prime(int num) {
    if (num <= 1) {
        return false;  // 小于等于1的数不是素数
    }
    if (num == 2) {
        return true;   // 2是素数
    }
    if (num % 2 == 0) {
        return false;  // 偶数不是素数（除了2）
    }

    // 检查奇数因子，只需要检查到平方根即可（因为假如可以被分为几个因子一定至少有一个小于√num！
    //limit为√num，也就是只用检查小于等于√num的正整数
    int limit = sqrt(num);
    for (int i = 3; i <= limit; i += 2) {
        if (num % i == 0) {
            return false;  // 能被整除，不是素数
        }
    }
    return true;  // 不能被任何数整除，是素数
}

int main() {
    int count = 0;      // 已找到的素数个数
    int num = 2;        // 从2开始检查
    int primes[200];    // 存储前200个素数

    // 查找前200个素数
    while (count < 200) {
        if (is_prime(num)) {
            primes[count] = num;  
            count++;            
        }
        num++;                    
    }

    // 按每行10个输出素数
    cout << "前200个素数：" << endl;
    for (int i = 0; i < 200; i++) {
        cout << setw(8) << primes[i];  // 设置输出宽度为8
        // 每输出10个素数换行
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }

    return 0;
}