#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double a, b, c, t, n, y;
	cout << "Введите значение a b c ";
	cin >> a >> b >> c;
	cout << "Введите значение t n";
	cin >> t >> n;
	y = (a * pow(t, 2)) + (b * t + c);
	if (y == n)
	{
		cout << "Да ";
	}
	else
		cout << "Нет";
}