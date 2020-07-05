#include<iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double a, r;
	cout << "¬ведите а и r";
	cin >> a >> r;
	if (r >= (exp(1 / 3 * log(3)) / 3) * a)
	{
		cout << "true";
	}
	else
		cout << "false";
}