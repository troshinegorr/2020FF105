#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double x, y;
	cout << "Введите число x : "; cin >> x;
	if (x <= 1) {
		y = 0;
		cout << "y =0 = " << y << endl;

	}
	else {
		y = 1 / (x + 6);
		cout << "y =1/(x+6) = " << y << endl;
	}

	system("PAUSE");
	return 0;
}
