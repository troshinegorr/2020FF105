#include <iostream>
#include<math.h>
using namespace std;
int main(void)
{
	double x, y, s;
	setlocale(LC_ALL, "Ru");
	cout << "Введите значение x и y ";
	cin >> x >> y;
	s = pow(1.0 + (1 / pow(x, 2)), x) - 12.0 * pow(x, 2) * y;
	cout << "Ответ " << s;

}