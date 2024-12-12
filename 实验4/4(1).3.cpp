#include<iostream>
using namespace std;
int main()
{
	bool a[100];
	for (int p = 0; p < 100; p++)
	{
		a[p] = 1;
	}
	for (int i = 2; i <= 100; i++)
	{
		for (int j = i; j <= 100; j++)
		{
			if ((j - i) % (i + 1) == 0)
			{
				if(a[j]==0)
				{
					a[j] = 1;
				}
				else
				{
					a[j] = 0;
				}
			}
				
		}
	}
	for (int f = 1; f <= 100; f++)
	{
		if(a[f]==1)
		{
			cout << f << " ";
		}
	}
	return 0;
}