#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0;
	cout << "������������3���߳�" << endl;
	cin >> a >> b >> c;
	int C = a + b + c;
	if (C > a * 2 && C > b * 2 && C > c)
	{
		cout << "�����α߳�Ϊ" << C << endl;
		if (a == b || a == c || b == c)
		{
			cout << "��������Ϊ����������" << endl;
		}
		else
		{
			cout << "�������β�Ϊ����������" << endl;
		}
	}
	else
	{
		cout << "������������" << endl;
	}
	return 0;
}