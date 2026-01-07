// student.cpp
#include <iostream>
#include "student.h"

// 在类外定义display类函数
void Student::display() const {
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}

// 定义set_value函数
void Student::set_value(int n, const char* na, char s) {
    num = n;
    strncpy(name, na, 19);  // 安全复制字符串
    name[19] = '\0';        // 确保字符串结尾
    sex = s;
}
