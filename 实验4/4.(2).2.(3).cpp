#include<iostream>
using namespace std;
void px(int sz[],int p)
{
	for (int i = 0; i < p - 1; i++)
	{
		for (int j = i; j < p - i - 1; p++)
		{
			if (sz[j] > sz[j + 1])
			{
				int tm = sz[j];
				sz[j] = sz[j + 1];
				sz[j + 1] = tm;
			}
		}
	}
}
void print(int sz[], int p)
{
	for(int i=0;i<p;i++)
	{
		cout << sz[i] << " ";
	}
}
int main()
{
	int* sz = new int[10];
	int p;
	cin >> p;
	for (int i = 0; i < p; i++)
	{
		cin >> sz[i];
	}
	px(sz, p);
	print(sz, p);
	delete[] sz;
	return 0;
}