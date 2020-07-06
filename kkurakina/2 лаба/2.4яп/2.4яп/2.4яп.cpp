#include<iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double x, x1;
	cout << "Введите значение x ";
	cin >> x;
	if (x > 0)
	{
		x1 = log(x) + 9;
	}
	if (x <= 0)
	{
		x1 = ((-x) / (pow(x, 2) - 7));
	}
	cout << "F(" << x << ")" << "=" << x1;
}