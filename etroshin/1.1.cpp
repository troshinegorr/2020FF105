#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double a, b, c, res;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	res = (b + sqrt(b * b + 4 * a * c)) / (2 * a) - pow(a, 3) * c + pow(b, -2);
	cout << "res = " << res << "\n";
	cin.get();
	return 0;
}
