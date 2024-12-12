#include<iostream>
using namespace std;
void bubble(int a[9])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9 - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int a, b;
	int* p = new int[1];
	cout << "输入数组list 1" << endl;
	cin >> a;
	for (int m = 0; m < a; m++)
	{
		cin >> p[m];
	}
	cout << "输入数组list 2" << endl;
	cin >> b;
	for (int n = a; n < a + b; n++)
	{
		cin >> p[n];
	}
	bubble(p);
	for (int d = 0; d < a + b; d++)
	{
		cout << p[d] << " ";
	}
	return 0;
}
