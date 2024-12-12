#include<iostream>
using namespace std;
int geshu(const char s[], int& a)
{
	a = 0;
	for (int p = 0; p < s[p] != '\0'; p++)
	{
		if (s[p] == ' ')
		{
			a++;
		}
	}
	return a;
}
int indexof(const char s1[], const char s2[])
{
	int a, b;
	int& A = a;
	int& B = b;
	geshu(s1, A);
	geshu(s2, B);
	for (int i = 0; i < B - A; i++)
	{
		int p = 0;
		for (int j = 0; j < A; j++)
		{
			if (s1[j] == s2[j + i])
			{
				p++;
			}
		}
		if (p == A)
		{
			cout << A + i + 1 << endl;
			return 0;
		}
	}
	cout << "-1" << endl;
}
int main()
{
	const char* s1, * s2;
	scanf("%", s1);
	scanf("%", s2);
	indexof(s1, s2);
	return 0;
}