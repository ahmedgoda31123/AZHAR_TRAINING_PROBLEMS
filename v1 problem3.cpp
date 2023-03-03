#include <iostream>

using namespace std;

int main()
{
	int limak, bob, years = 0;
	cin >> limak >> bob;

	while (true)
	{
		limak *= 3;
		bob *= 2;
		years++;

		if (limak > bob) break;
	}

	cout << years;
}