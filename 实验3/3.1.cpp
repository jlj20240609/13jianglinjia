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
			cout << "���Լ��Ϊ" << i << endl;
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
			cout << "��С������Ϊ" << j << endl;
			break;
		}
	}
}
int main()
{
	int m,n;
	cout << "����m,n" << endl;
	cin >> m >> n;
	yue(m, n);
	bei(m, n);
	return 0;

}