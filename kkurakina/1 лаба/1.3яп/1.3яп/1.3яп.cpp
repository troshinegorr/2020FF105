#include <iostream>
#include<math.h>
using namespace std;
int main(void)
{
	double a, b, c;
	setlocale(LC_ALL, "Ru");
	cout << "Введите значение a ";
	cin >> a;
	cout << "Введите значение квадрата a^2 ";
	cin >> b;
	cout << "Введите значение куба a^3 ";
	cin >> c;
	if (c == pow(a, 3) && (b == pow(a, 2)))
	{
		cout << "True";
	}
	else
		cout << "False";

}