#include <iostream>

#include <stdlib.h>

#include <math.h>

#include <locale>

using namespace std;

int main()

{

	setlocale(LC_ALL, "Russian");

	double e;

	cout << "Введите е = ";

	cin >> e;

	cout << endl;

	double a, an;

	an = 0, 25;

	int i = 1;

	cout << an;

	do

	{

		a = an;

		an = 1 / pow(2 * i, 2);

		i++;

		cout.precision(4);

		cout << " " << an;

	} while (fabs(an - a) >= e);

	cout << endl;

	cout << "Номер первого элемента для которого |an-an-1|<e = " << i << "\n";

	system("pause");

}