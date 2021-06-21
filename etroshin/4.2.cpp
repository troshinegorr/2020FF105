#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int i, n;
	double f = 1, c = 0, s = 0;
	cout << "Введите n=";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		c = c + cos(i);
		s = s + sin(i);
		f = c / (s)*f;
	}
	cout << "Результат: " << f << endl;
	return 0;
}