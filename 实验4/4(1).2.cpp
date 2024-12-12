#include<iostream>
using namespace std;
void bubble(double a[9])
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
	double a[9];
	cout << "ÊäÈëÊý×é" << endl;
	for (int p = 0; p < 10; p++)
	{
		cin >> a[p];
	}
	bubble(a);
	for (int q = 0; q < 10; q++)
	{
		cout << a[q] << " ";
	}
	return 0;
}