// student.h
#ifndef STUDENT_H  // 防止头文件重复包含
#define STUDENT_H

#include <iostream>
#include <cstring>
using namespace std;

class Student {
public:
    // 公用成员函数原型声明
    void display() const;
    void set_value(int n, const char* na, char s);  // 新增的set_value函数

private:
    int num;
    char name[20];
    char sex;
};
#endif


