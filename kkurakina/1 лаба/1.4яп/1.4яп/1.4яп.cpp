#include <iostream>
#include<math.h>
using namespace std;
int main(void)
{
	double x, y, z;
	setlocale(LC_ALL, "Ru");
	cout << "Введите значение x,y ";
	cin >> x>>y;
	z = 0;
	if ((x >= 2 && x <= 6) && (y >= 2 && y <= 5))
	{
		z = 1;
	}
	if ((x >= -2 && x <= 2) && (y >= -5 && y <= 5))
	{
		z = 1;
	}
	if ((x >= -6 && x <= -2) && (y >= 2 && y <= 5))
	{
		z = 1;
	}
	cout << z;
}