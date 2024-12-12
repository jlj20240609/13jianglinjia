#include<iostream>
using namespace std;
int main()
{
	const double m = 3.14;
	int R = 0, H = 0;
	double V = 0;
	cout << "请输入圆锥的半径" << endl;
	cin >> R;
	cout << "请输入圆锥的锥高" << endl;
	cin >> H;
	V = (m * R * R * H) / 3;
	cout << "圆锥的体积为" << V << endl;
	return 0;
}