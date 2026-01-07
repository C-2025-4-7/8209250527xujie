#include <iostream>
using namespace std;

class Student {
private:
    int id;
    float score;
public:
    // 构造函数
    Student(int i = 0, float s = 0) : id(i), score(s) {}

    // 获取学号
    int getId() const { return id; }

    // 获取成绩
    float getScore() const { return score; }
};

// max函数：找出最高成绩的学生
void max(Student* students, int n) {
    Student* highest = students;

    for (int i = 1; i < n; i++) {
        if (students[i].getScore() > highest->getScore()) {
            highest = &students[i];
        }
    }

    cout << "最高成绩者的学号是：" << highest->getId() << endl;
    cout << "成绩为：" << highest->getScore() << endl;
}

int main() {
    // 创建并初始化包含5个学生的对象数组
    Student students[5] = {
        Student(1001, 85.5),
        Student(1002, 92.0),
        Student(1003, 78.5),
        Student(1004, 95.5),
        Student(1005, 88.0)
    };

    // 调用max函数，传递指向对象的指针
    max(students, 5);

    return 0;
}