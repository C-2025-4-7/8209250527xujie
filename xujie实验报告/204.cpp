#include <iostream>
using namespace std;
int main() 
{
    double num1, num2;
    char op;
    double result;
    cout << "计算器程序" << endl;
    cout << "实现+, -, *, /, %运算" << endl;
    cout << "请输入表达式: ";
    cin >> num1 >> op >> num2;
    switch (op) 
    {
    case '+':
        result = num1 + num2;
        cout << result << endl;
        break;

    case '-':
        result = num1 - num2;
        cout << result << endl;
        break;

    case '*':
        result = num1 * num2;
        cout << result << endl;
        break;

    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            cout << result << endl;
        }
        else 
            cout << "错误：除数不能为0！" << endl;
        break;

    case '%':
        if (num2 != 0) 
        {
            int intNum1 = static_cast<int>(num1);
            int intNum2 = static_cast<int>(num2);
            result = intNum1 % intNum2;
            cout << result << endl;
        }
        else 
            cout << "除数不能为0！" << endl;
        break;

    default:
        cout << "不支持此运算 '" << op << "'" << endl;
        cout << "支持以下运算： +, -, *, /, %" << endl;
        break;
    }
    return 0;
}