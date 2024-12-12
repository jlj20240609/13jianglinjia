#include<iostream>
using namespace std;
int main()
{
	double cel, fah;
	int m;
	cout << "1.摄氏度转华氏度" << endl << "2.华氏度转摄氏度" << endl;
	cin >> m;
	if (m == 1)
	{
		cout << "Celsius" << "   " << "fahrenheit" << endl;
		for (int i = 0;; i++)
		{
			cin >> cel;
			double celsius_to_fah(cel);
			while (cel == -100)
			{
				break;
			}
		}
	}
	else if (m == 2)
	{
		cout << "fahrenheit" << "    " << "Celsius" << endl;
		for (int j = 0;; j++)
		{
			cin >> fah;
			double fahrenheit_to_cels(fah);
			while (cel == -100)
			{
				break;
			}
		}
	}
	return 0;
}