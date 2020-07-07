// вариант 18 задание 1 
#include <iostream>

#include <cstdlib>

#include <ctime>

using namespace std;

int main()

{

	int n, i, r, k;

	int a[100][100];

	cin >> n;

	r = 0;

	k = 0;

	do

	{

		r++;

		for (i = r; i <= n - r + 1; i++)

		{

			k++;

			a[i][r] = k;

		}

		for (i = r + 1; i <= n - r + 1; i++)

		{

			k++;

			a[n - r + 1][i] = k;

		}

		for (i = n - r; i >= r; i--)

		{

			k++;

			a[i][n - r + 1] = k;

		}

		for (i = n - r; i >= r + 1; i--)

		{

			k++;

			a[r][i] = k;

		}

	} while (k != n * n);

	for (i = 1; i <= n; i++)

	{

		cout << endl;

		for (k = 1; k <= n; k++)

			cout << a[i][k] << " ";

	}

	system("pause");

	return 0;

}