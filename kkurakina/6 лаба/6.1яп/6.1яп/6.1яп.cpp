#include <iostream>

using namespace std;

int main() {

	setlocale(LC_CTYPE, "Russian");

	int n, k;

	int a[100], temp;

	cin >> n;

	k = 0;

	for (int i = 1; i <= n; i++)

		cin >> a[i];

	for (int i = 1; i <= n; i++)

		if (a[i] < 0)

		{

			k++;

			a[i] = a[i] - a[i] * 2;

		}

	cout << "Новый массив: " << endl;

	for (int i = 1; i <= n; i++)

		cout << a[i] << endl;

	cout << "Кол-во замен: " << k << endl;

	system("pause");

	return 0;

}