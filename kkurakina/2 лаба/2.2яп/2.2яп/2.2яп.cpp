#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double a, b, c;
	cout << "Введите значение a b ";
	cin >> a >> b;
	c = a + b;
	if (c > 32767)
	{
		cout << "Переполнение ";
	}
	else
		cout << c;
}