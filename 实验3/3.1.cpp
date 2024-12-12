#include<iostream>
using namespace std;
void yue(int a, int b)
{
	int c;
	if (a > b)
	{
		c = b;
	}
	else { c = a; }
	for (int i = c; i > 0; i--)
	{
		if (a % i == 0 && b % c == 0)
		{
			cout << "最大公约数为" << i << endl;
			break;
		}
	}
}
void bei(int a, int b)
{
	int c;
	if (a > b)
	{
		c = a;
	}
	else 
	{ c = b; }
	for (int j = c;; j++)
	{
		if (j % a == 0 && j % b == 0)
		{
			cout << "最小公倍数为" << j << endl;
			break;
		}
	}
}
int main()
{
	int m,n;
	cout << "输入m,n" << endl;
	cin >> m >> n;
	yue(m, n);
	bei(m, n);
	return 0;

}