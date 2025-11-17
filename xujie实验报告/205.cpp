#include <iostream>
#include <cctype>  
using namespace std;
int main() {
    char c;
    int letters = 0, spaces = 0, digits = 0, others = 0;
    cout << "请输入一行字符: ";       
    while (cin.get(c) && c != '\n')  // cin和scanf（）不可用，查询资料得可使用cin.get()读取字符，包括空格和换行符
    {
        if (isalpha(c)) 
            letters++;
        else if (isdigit(c)) 
            digits++;
        else if (isspace(c)) 
            spaces++;
        else 
            others++;
    cout << "\n统计结果:" << endl;
    cout << "英文字母: " << letters << endl;
    cout << "数字字符: " << digits << endl;
    cout << "空格: " << spaces << endl;
    cout << "其他字符: " << others << endl;
    return 0;
}