#include <iostream>

using namespace std;

int main()

{

	const int N = 10;

	int a[N][N];

	for (int i = 1; i <= 10; i++)

		for (int j = 1; j <= 10; j++)

		{

			if (i == j)

				a[i][j] = 1;

			else a[i][j] = 0;

			if (i < j)

				a[i][j] = j - i + 1;

		}

	for (int i = 1; i <= 10; i++)

	{

		cout << endl;

		for (int j = 1; j <= 10; j++)

			cout << a[i][j] << " ";

	}

	system("pause");

	return 0;

}