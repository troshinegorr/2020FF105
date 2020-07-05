#include <iostream>
#include <math.h>

using namespace std;

void primeGenerator(int x)

{
	if (x < 1 || x > 36)
		cout << "Invalid value of x!";
	else
		for (int i = 0; i <= x; ++i)
			cout << (pow(2, 2 * i + 1) + 1) / 3 << endl;
}

int main()

{
	int x;
	cout << "Enter x ";
	cin >> x;
	primeGenerator(x);
	return 0;
}