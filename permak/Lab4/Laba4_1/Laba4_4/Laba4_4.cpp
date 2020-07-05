#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, f, h;
	cout << "Введите левую границу интервала a = ";
	cin >> a;
	cout << "Введите правую границу интервала b = ";
	cin >> b;
	cout << "Введите шаг h = ";
	cin >> h;
	for (double i = a; i <= b; i += h)
	{
		f = sqrt(i) * pow(cos(i), 2);
		cout << "x = " << i << "\tf(x) = " << f << endl;
	}
	system("pause");
	return 0;
}