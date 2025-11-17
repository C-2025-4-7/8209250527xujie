#include <iostream>
#include <cctype> 
using namespace std;
int main()
{
    char ch;
    cout << "请输入一个字符: ";
    cin >> ch;
    if (islower(ch))
    {
        char upperCh = toupper(ch);
        cout << "转换为大写: " << upperCh << endl;
    }
    else
    {
        int nextAscii = ch + 1;
        cout << "后继字符的ASCII码值: " << nextAscii << endl;
    }
    return 0;
}