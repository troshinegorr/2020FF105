#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n = 1;
	double an = 1., sum = -1., eps;

	cout << "eps="; cin >> eps;

	while (an >= eps)
	{

		sum += an;
		an = (2 * n - 1) / (pow(2, n));
		n++;
	}

	cout << "sum = " << sum << "\n";

	system("pause");
	return 0;
}
