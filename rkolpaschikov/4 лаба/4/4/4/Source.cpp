#include <iostream>

#include <clocale>

#include <cmath>

using namespace std;

int main()

{

	setlocale(LC_ALL, "Russian");

	double a, b, f, h;

	cout << "¬ведите левую границу интервала a = ";

	cin >> a;

	cout << "¬ведите правую границу интервала b = ";

	cin >> b;

	cout << "¬ведите шаг h = ";

	cin >> h;

	for (double i = a; i <= b; i += h)

	{

		f = (cos(i / 3) / sin(i / 3)) + 0.5 * sin(i);

		cout << "x = " << i << "\tf(x) = " << f << endl;

	}

	system("pause");

	return 0;

}