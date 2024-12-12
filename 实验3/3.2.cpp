#include<iostream>
using namespace std;
int m;
bool is_prime(int num)
{
	for (int i = num; i > 0; i--)
	{
		int a = 0;
		if (num % i == 0)
		{
			a++;
		}
		if (i == 2)
		{
			m=i;
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
int main()
{
	int p;
	cout << "请问你要求前几位素数" << endl;
	cin >> p;
	for (int j = 1;; j++)
	{
		int d = 0;
		 m = 0;
		is_prime(j);
		if(m==2)
		{
			cout << j << " ";
			d++;
		}
		while (d%10==0)
		{

			cout << endl;
		}
		while (d == p)
		{
			break;
		}
	}
	return 0;
	
}