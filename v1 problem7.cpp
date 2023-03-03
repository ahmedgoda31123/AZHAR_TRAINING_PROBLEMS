#include <iostream>

using namespace std;

int main()
{
	int n;
	int colors[60];
	int counter = 0;
	cin >> n;

	for (int i = 0;i < 2 * n;i++)
	{
		cin >> colors[i];
	}

	for (int i = 0;i < 2 * n;i += 2)
	{
		for (int j = 1;j < 2 * n;j += 2)
		{
			if (colors[i] == colors[j]) counter++;
		}
	}
	cout << counter;
}