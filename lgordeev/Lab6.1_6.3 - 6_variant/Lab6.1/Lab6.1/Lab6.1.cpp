#include <iostream>
#include <math.h>

using namespace std;

double t (double a) {
		return  (pow(a, 2) * sqrt(3) / 4);
}

 int main()
{
	setlocale(LC_ALL, "ru");
	double a = 0;
	cout << "Введите длину стороны ";
	cin >> a;
	cout << "Площадь правильного шестиугольника = " << (t(a)*6) << endl;
}
