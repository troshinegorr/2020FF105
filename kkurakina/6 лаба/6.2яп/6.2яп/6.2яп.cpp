#include <iostream>

using namespace std;

int main() {

	setlocale(LC_CTYPE, "Russian");

	int a, k;

	k = 0;

	cin >> a;

	do

	{

		a = a - (a / 10 + a % 10);

		k++;

	} while (a > 0);

	cout << k << endl;

	system("pause");

	return 0;

}