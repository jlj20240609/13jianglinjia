#include<iostream>
using namespace std;
int main()
{
	int x = 0;
	double y = 0;
	cout << "������x" << endl;
	cin >> x;
	if (x > 0 &&x < 1)
	{
		y = 3 - 2 * x;
		cout << "yΪ" <<y<< endl;
	}
	else if(x>=1&&x<5)
	{
		y = 2.000 / (4 * x) * 1 + 1;
		cout << "yΪ" << y << endl;
	}
	else if (x >= 5 && x < 10)
	{
		y = x * x;
		cout << "yΪ" << y << endl;
	}
	return 0;
}