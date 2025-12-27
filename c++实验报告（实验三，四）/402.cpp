#include <iostream>
#include <cctype>
#include <cstring>

// 函数声明
int parseHex(const char* const hexString);

int main() {
    // 测试用例
    const char* testCases[] = {
        "0",      
        "1",      
        "A5",     
        "FF",     
        "100",    
        "ABCD",   
        "7FFFFFFF" 
    };

    int numTests = sizeof(testCases) / sizeof(testCases[0]);

    std::cout << "十六进制转十进制测试：" << std::endl;
    std::cout << "======================" << std::endl;

    for (int i = 0; i < numTests; i++) {
        try {
            int result = parseHex(testCases[i]);
            std::cout << "parseHex(\"" << testCases[i] << "\") = " << result << std::endl;
        }
        catch (const std::invalid_argument& e) {
            std::cout << "parseHex(\"" << testCases[i] << "\") 错误: " << e.what() << std::endl;
        }
    }

    // 用户交互测试
    std::cout << "\n请输入一个十六进制数进行测试: ";
    char input[100];
    std::cin >> input;

    try {
        int decimalValue = parseHex(input);
        std::cout << "十六进制数 " << input << " 的十进制值为: " << decimalValue << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cout << "错误: " << e.what() << std::endl;
    }

    return 0;
}

// 函数定义：将十六进制字符串转换为十进制整数
int parseHex(const char* const hexString) {
    if (hexString == nullptr) {
        throw std::invalid_argument("输入字符串为空指针");
    }

    int length = strlen(hexString);
    if (length == 0) {
        throw std::invalid_argument("输入字符串为空");
    }

    int result = 0;

    for (int i = 0; i < length; i++) {
        char c = hexString[i];
        int digitValue;

        if (c >= '0' && c <= '9') {
            digitValue = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            digitValue = 10 + (c - 'A');
        }
        else if (c >= 'a' && c <= 'f') {
            digitValue = 10 + (c - 'a');
        }
        else {
            throw std::invalid_argument("输入包含非法十六进制字符");
        }

        result = result * 16 + digitValue;
    }

    return result;
}