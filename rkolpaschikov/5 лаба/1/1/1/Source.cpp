#include <iostream>

using namespace std;

int main()

{

	int k, n, s, i, j;

	k = 0;

	cin >> n;

	for (i = 10000000; i <= 99999999; i++)

	{

		j = i;

		s = 0;

		do

		{

			s = s + j % 10;

			j = j / 10;

		} while (j > 0);

		if (s > n)

			k++;

	}

	if (k == 0)

		cout << "NO" << endl;

	else cout << k << endl;

	system("Pause");

}