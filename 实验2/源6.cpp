#include<iostream>
using namespace std;
int min(int a, int b)
{
	if (a >= b)
	{return a;}
	else
	{return b;}
}
int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	int c = min(a, b);
	for (int i = c; i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0 && i != 1)
		{cout << "���Լ��Ϊ" << i << endl << "��С������Ϊ" << (a / i) * b << endl;
			return 0;}
	}
	cout << "���Լ��Ϊ1" << endl << "��С������Ϊ" << a * b << endl;
	return 0;
}