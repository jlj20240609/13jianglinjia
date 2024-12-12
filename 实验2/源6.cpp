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
		{cout << "最大公约数为" << i << endl << "最小公倍数为" << (a / i) * b << endl;
			return 0;}
	}
	cout << "最大公约数为1" << endl << "最小公倍数为" << a * b << endl;
	return 0;
}