#include<iostream>
using namespace std;
int main()
{
	string a;
	int m = 1;
	cin >> a;
	int* b = new int[3];
	b[0] = a[0] - '0';
	int p = sizeof(a) / sizeof(a[0]-'0');
	for (int i = 1; i < p; i++)
	{
		int n = 0;
		for (int j = 0; j < m; j++)
		{
			if (a[i]-'0' != b[j])
			{
				n++;
			}
		}
		if (n == m)
		{
			b[m] = a[i]-'0';
			m++;
		}
	}
	for (int g = 0; g < m; g++)
	{
		cout << b[g] << " ";
	}
	delete[] b;
	return 0;
}