#include <iostream>

using namespace std;

int main()
{
	int n;
	string s;
	cin >> n >> s;
	int counter1, counter2;
	for (int i = 0;i < n;i++)
	{
		if (s[i] == "A") counter1++;
		else counter2++;
	}
	if (counter1 > counter2) cout << "Anton";
	else if (counter2 > counter1)cout << "Danik";
	else cout << "Friendship";

}









