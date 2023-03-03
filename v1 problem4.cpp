#include <iostream>

using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;

	for (int i = 0;i < s1.length();i++)
	{
		tolower(s1[i]);
		tolower(s2[i]);
	}
	for (int j = 0;j < s1.length();j++)
	{
		if (!(s1[j] == s2[j]))
		{
			if (s1[j] > s2[j]) cout << "1";
			else cout << "-1";
			return 0;
		}
	}
	cout << "0";
	return 0;
}