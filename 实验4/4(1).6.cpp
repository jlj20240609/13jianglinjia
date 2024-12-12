#include<iostream>
using namespace std;
int counts[26];
void count(const char s[], int counts[])
{
	int z[26];
	for (int m = 0; m < 26; m++)
	{
		z[m] = m + 65;
	}
	int p = sizeof(s);
	for (int i = 0; i < p; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if ((int)s[i] == z[j]|| (int)s[i] == z[j] + 32)
			{
				counts[j]++;
			}
		}
	}
	for (int y = 0; y < 26; y++)
	{
		if (counts[y] != 0)
		{
			cout << (char)y << ":" << counts[y] << endl;
		}
	}
}
int main()
{
	char s[10000];
	cin.get(s, 10000);
	count(s, counts);
	return 0;
}