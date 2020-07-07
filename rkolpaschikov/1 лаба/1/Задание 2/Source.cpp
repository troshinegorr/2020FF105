#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
		int x;
	cout << "¬ведение значение x:";
	cin >> x;
	x = abs(pow(x, 2) - pow(x, 3)) - (7 * x) / (pow(x, 3) - 15 * x);
	cout << x;


}