#include<iostream>
using namespace std;
int main()
{
	const double m = 3.14;
	int R = 0, H = 0;
	double V = 0;
	cout << "������Բ׶�İ뾶" << endl;
	cin >> R;
	cout << "������Բ׶��׶��" << endl;
	cin >> H;
	V = (m * R * R * H) / 3;
	cout << "Բ׶�����Ϊ" << V << endl;
	return 0;
}