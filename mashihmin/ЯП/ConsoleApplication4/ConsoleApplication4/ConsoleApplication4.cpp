// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "iostream"
#include "math.h"
#define PI 3.14159265

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int x, b, N = 1;
	double h, e, a = 1, y = 2, r = 0, q = 0;

	cout << "Задание 1" << endl;
	cout << "Введите длину палки" << endl;
	cin >> x;
	cout << "Введите шаг" << endl;
	cin >> h;
	while (y >= 2 && y <= 3)
	{
		a = 90 - (asin(y / x) * 180 / PI);
		cout << "При расстоянии в " << y << " М от стены, угол равен " << a << " градусов" << endl;
		y = y + h;
	}
	system("pause");

	cout << "Задание 2" << endl;
	cout << "Введите Натуральное число" << endl;
	cin >> N;
	for(x=1;x<=N;x++)
	{
		r = r + cos(x);
		q = q + sin(x);
		h = r / q;
		a = a * h;
	}
	cout <<"Ответ: " << a << endl;
	system("pause");

	cout << "Задание 3" << endl;
	cout << "Введите натуральное число" << endl;
	cin >> x;
	cout << "Введите число e" << endl;
	cin >> e;
	do
	{
		r = r + 1 / ((3 * N - 2)*(3 * N + 1));
		N++;
	} while (a >= e && N <= x);
	cout << "Ответ: " << r << endl;
	system("pause");

	cout << "Задание 4" << endl;
	cout << "Введите начало отрезка" << endl;
	cin >> a;
	cout << "Введите конец отрезка" << endl;
	cin >> b;
	cout << "Введите шаг" << endl;
	cin >> h;
	x = a;
	while (x >= a && x <= b)
	{
		y = tan(x);
		cout << "a = " << x << " | " << y << endl;
		x = x + h;
	}
	system("pause");
}
