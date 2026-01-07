#include <iostream>
using namespace std;

class Cuboid {
private:
    double length;  // 长
    double width;   // 宽
    double height;  // 高

public:
    // 成员函数：输入长方柱的长宽高
    void inputData() {
        cout << "请输入长方柱的长、宽、高（用空格分隔）: ";
        cin >> length >> width >> height;
    }

    // 成员函数：计算长方柱的体积
    double calculateVolume() {
        return length * width * height;
    }

    // 成员函数：输出长方柱的体积
    void outputVolume() {
        cout << "长方柱的体积为: " << calculateVolume() << endl;
    }
};

int main() {
    Cuboid cuboid1, cuboid2, cuboid3;

    cout << "=== 第一个长方柱 ===" << endl;
    cuboid1.inputData();
    cuboid1.outputVolume();

    cout << "\n=== 第二个长方柱 ===" << endl;
    cuboid2.inputData();
    cuboid2.outputVolume();

    cout << "\n=== 第三个长方柱 ===" << endl;
    cuboid3.inputData();
    cuboid3.outputVolume();

    return 0;
}