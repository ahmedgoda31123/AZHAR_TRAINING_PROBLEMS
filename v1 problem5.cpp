#include <iostream>

using namespace std;

int main()
{
	int x, y, matrix[5][5], counter = 0;
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			cin >> matrix[i][j];
		}
	}

	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			if (matrix[i][j] == 1)
			{
				x = i;
				y = j;
			}
		}
	}

	if (x > 2) counter += x - 2;
	else counter += 2 - x;

	if (y > 2) counter += y - 2;
	else counter += 2 - y;

	cout << counter;
}
