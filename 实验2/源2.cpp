#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0;
	cout << "请输入三角形3条边长" << endl;
	cin >> a >> b >> c;
	int C = a + b + c;
	if (C > a * 2 && C > b * 2 && C > c)
	{
		cout << "三角形边长为" << C << endl;
		if (a == b || a == c || b == c)
		{
			cout << "该三角形为等腰三角形" << endl;
		}
		else
		{
			cout << "该三角形不为等腰三角形" << endl;
		}
	}
	else
	{
		cout << "不构成三角形" << endl;
	}
	return 0;
}