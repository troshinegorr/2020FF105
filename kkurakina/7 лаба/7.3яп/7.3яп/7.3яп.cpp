#include <iostream>

using namespace std;

int main()

{

	setlocale(0, "");

	int a[100];

	int i, N;

	double min, max, t;

	cout << "Кооринаты" << endl;

	cout << "X Y" << endl;

	cin >> N;

	for (i = 1; i <= N; i++)

	{

		cin >> a[i * 2 - 1];

		cin >> a[i * 2];

		cout << a[i * 2 - 1] << a[i * 2] << endl;

	}

	min = sqrt((a[1] * a[1]) + a[2] * a[2]);

	max = min;

	for (i = 2; i <= N; i++)

	{

		t = sqrt(a[2 * i - 1] * a[2 * i - 1] + a[2 * i] * a[2 * i]);

		if (min > t)

			min = t;

		else if (max < t)

			max = t;

	}

	cout << "Кольцо: r = " << min << " , R = " << max << endl;

	system("pause>0");

	return 0;

}
