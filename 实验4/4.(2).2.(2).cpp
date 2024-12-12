#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int parseHex(const char* const hexString) {
    int a = 0;
    int len = strlen(hexString);

    for (int i = 0; i < len; i++) {
        char b = hexString[len - i - 1];
        int c;

        if (b >= '0' && b<= '9') {
            c = b - '0';
        }
        else if (b >= 'A' && b <= 'F') {
            c =b - 'A' + 10;
        }
        else if (b >= 'a' && b <= 'f') {
            c=b - 'a' + 10;
        }
        else {
            std::cout << "�����ʮ�������ַ�����ʽ����ȷ" <<endl;
            return -1;
        }

        a += c * std::pow(16, i);
    }

    return a;
}

int main() 
{
    char const* h;
    scanf("%a", h);
    int d = parseHex(h);
    cout << h << " ת��Ϊʮ����Ϊ: " << d << endl;
    return 0;
}