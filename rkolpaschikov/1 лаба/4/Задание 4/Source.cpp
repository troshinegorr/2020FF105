#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double x, y, z;
	cout << "Введите координаты точек:";
	cin >> x >> y;
	z = sqrt(pow(x, 2)) + pow(y, 2);
	if (z <= 6)
	{
		if (x > 0 && y > 0)
		{
			cout << "Не принадлежат";

		}
		cout << "Принадлежат";

	}
	else
		cout << "Не принадлежат";


}