#include<iostream>
using namespace std;
int main()
{
	char ch = 'A';
	cout << "ÇëÊäÈë×Ö·û" << endl;
	cin >> ch;
	if ((int)ch >90	)
	{
		ch = ch - 32;
		cout << (char)ch << endl;
	}
	else
	{
		cout << (int)ch << endl;
		return 0;
	}
}