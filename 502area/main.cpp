// main.cpp
#include <iostream>
#include "student.h"

int main() {
    Student stud{};  // 定义对象stud
    Student stud1{}; // 定义对象stud1

    // 使用set_value函数为stud1设置值
    stud1.set_value(7, "tcg", 'm');

    // 为stud设置值
    stud.set_value(1, "Zhang San", 'm');

    // 执行对象的display函数
    cout << "stud的信息：" << endl;
    stud.display();

    cout << "\nstud1的信息：" << endl;
    stud1.display();

    return 0;
}