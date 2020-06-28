#include <iostream>

#include <stdlib.h>

#include <math.h>

#include <locale>

using namespace std;

int main()

{

	setlocale(LC_ALL, "Russian");

	int y, n, i;

	cin >> n;

	y = 1;

	for (i = 1; i <= n; i++)

		y = y * (i * 2 - 1);

	cout << y << endl;

	system("pause");

}
