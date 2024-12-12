#include<iostream>
using namespace std;
int main()
{
	const double c = 0.8;
	int a = 2, sum = 2, d = 1;
	do
	{
		d++;
		a = a * 2;
		sum = sum + a;
	} while (sum <= 100);
		double p = (sum * c) / d;
		cout << p << endl;
		return 0;
}
