#include <iostream>
using namespace std;
int main()
{
    char op;
    float num1, num2;
    cout << "�����������+��-��*��/ : ";
    cin >> op;
    cout << "����������: ";
    cin >> num1 >> num2;
    switch (op)
    {case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        if (num2 == 0)
        {
            cout << "error���ܳ�����";
            break;
        }
        else
        {
            cout << num1 / num2;
            break;
        }
    default:
        cout << "������������ȷ�������";
            break;
    }

    return 0;
}