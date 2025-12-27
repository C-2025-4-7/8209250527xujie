#include <iostream>
#include <cstring>

using namespace std;

// 函数原型
int indexof(const char* s1, const char* s2);

int main() {
    char s1[100], s2[100];

    // 输入两个字符串
    cout << "请输入第一个字符串 s1: ";
    cin.getline(s1, 100);

    cout << "请输入第二个字符串 s2: ";
    cin.getline(s2, 100);

    // 调用函数并输出结果
    int result = indexof(s1, s2);
    if (result != -1) {
        cout << "字符串 \"" << s1 << "\" 在 \"" << s2 << "\" 中第一次出现的下标是: " << result << endl;
    }
    else {
        cout << "字符串 \"" << s1 << "\" 不是 \"" << s2 << "\" 的子串" << endl;
    }

    return 0;
}

// 实现查找子串的函数
int indexof(const char* s1, const char* s2) {
    // 如果 s1 是空字符串，根据约定返回 0
    if (*s1 == '\0') {
        return 0;
    }

    // 遍历 s2 的每个字符作为起始位置
    for (int i = 0; s2[i] != '\0'; i++) {
        bool match = true;

        // 检查从当前位置开始是否匹配 s1
        for (int j = 0; s1[j] != '\0'; j++) {
            if (s2[i + j] == '\0') {
                match = false;  // s2 已结束，无法匹配
                break;
            }
            if (s1[j] != s2[i + j]) {
                match = false;  // 字符不匹配
                break;
            }
        }

        // 如果找到匹配，返回当前下标
        if (match) {
            return i;
        }
    }

    // 未找到匹配
    return -1;
}