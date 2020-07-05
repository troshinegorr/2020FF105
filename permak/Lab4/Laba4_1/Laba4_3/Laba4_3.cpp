#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double factorial(double k)

{
	double fact = 1;
	while (k != 0)
	{
		fact *= k;
		k--;
	}
	return fact;
}

int main()

{
	int n, e;
	double sum = 0;
	setlocale(0, "Rus");
	cout << "Введите n и e " << endl;;
	cin >> n >> e;
	double* arr = new double[n];
	for (int i = 1; i <= n; i++)
	{
		arr[i] = factorial(i) / factorial(pow(2, n));
		cout << arr[i] << endl;
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= e)
		{
			sum = sum + arr[i];
		}
	}

	cout << "Сумма членов ряда >= e: " << sum << endl;
	system("pause");

}