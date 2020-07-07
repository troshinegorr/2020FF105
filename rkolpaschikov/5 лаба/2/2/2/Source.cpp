#include <iostream>

using namespace std;

int SumSqrtDigits(int k)

{

	int d, sum_sqrt = 0;

	while (k)

	{

		d = k % 10;

		sum_sqrt += d * d;

		k /= 10;

	}

	return sum_sqrt;

}

int main()

{

	int n, M, s = 1, e, b = 0;

	cout << "n="; cin >> n;

	cout << "M="; cin >> M;

	for (int i = 1; i < n; i++)

		s *= 10;

	e = s * 10;

	for (int i = s; i < e; i++)

		if (SumSqrtDigits(i) % M == 0) { b++; cout << i << "\n"; }

	if (!b) cout << "No such numbers\n";

	system("pause");

	return 0;

}