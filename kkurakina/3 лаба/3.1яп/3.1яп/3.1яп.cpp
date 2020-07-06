#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double x, y, b;
	int a;
	cout << "Введите значение x y ";
	cin >> x >> y;
	cout << "1 +, 2 -,3 *,4 /\n";
	cin >> a;
	switch (a)
	{
	case 1: b = x + y; cout << b; break;
	case 2: b = x - y; cout << b; break;
	case 3: b = x * y; cout << b; break;
	case 4: b = x / y; cout << b; break;
	default:cout << "Ошибка";
	}
}