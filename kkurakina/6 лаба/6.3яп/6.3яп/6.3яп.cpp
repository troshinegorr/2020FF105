#include <iostream>

using namespace std;

int MinK(int* X, int k)

{

	int R, Result = X[k - 1];

	if (k == 1)

		Result = X[0];

	if (k > 1)

	{

		R = MinK(X, k - 1);

		if (Result > R) Result = R;

	}

	return Result;

}

int main()

{

	int X[100], n, i;

	setlocale(LC_CTYPE, "Russian");

	printf("Введите количество элементов в массиве: ");

	cin >> n;

	for (i = 0; i < n; i++)

	{

		printf("\nX[%d]=", i);

		cin >> X[i];

	}

	printf("\nMin(X) = %d\n", MinK(X, n));

}