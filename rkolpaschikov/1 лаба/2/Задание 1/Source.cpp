#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double x, x1, x2;
	cout << "¬ведите значение x:";
	cin >> x;
	x1 = -2 * x + 3 * (pow(x, 2)) - 4 * (pow(x, 3));
	x2 = 1 + 2 * x + 3 * (pow(x, 2)) + 4 * pow(x, 3);
	cout << x1 << " " << x2;

		
	

	
}