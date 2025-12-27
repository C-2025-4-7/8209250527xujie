#include <iostream>
using namespace std;

// 冒泡排序函数，使用指针操作数组
void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                // 交换元素
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int size;
    int* arr;

    // 输入数组元素个数
    cout << "请输入数组元素个数: ";
    cin >> size;

    // 动态分配内存
    arr = new int[size];

    if (arr == nullptr) {
        cout << "内存分配失败!" << endl;
        return 1;
    }

    // 输入数组元素
    cout << "请输入 " << size << " 个整数:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "元素 " << i + 1 << ": ";
        cin >> *(arr + i);
    }

    cout << "\n=== 调试信息 ===" << endl;
    cout << "数组地址: " << arr << endl;
    cout << "数组内容(排序前): ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
        // 调试：显示每个元素的内存地址
        // cout << "地址[" << i << "]:" << arr + i << " 值:" << *(arr + i) << endl;
    }
    cout << endl;

    // 排序数组
    bubbleSort(arr, size);

    // 输出排序后的数组
    cout << "排序后的数组:" << endl;
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    // 释放内存
    delete[] arr;
    arr = nullptr;  // 防止悬挂指针

    cout << "内存已成功释放!" << endl;

    return 0;
}