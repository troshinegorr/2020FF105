#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int m, n, num, nummax, k, kmax = 0;
	cout << "введите нижнюю границу диапазона\n";
	cin >> m;
	cout << "введите верхнюю границу диапазона\n";
	cin >> n;
	for (num = m; num <= n; num++)
	{
		k = 0;
		for (int i = 2; i <= num / 2; i++)
			if (num % i == 0) k++;
		if (k > kmax)
		{
			kmax = k;
			nummax = num;
		}

	}
	cout << "на указаном отрезке числом с наибольшим колличеством делителей является " << nummax << ", которое имеет " << kmax << " делителей\n";
}