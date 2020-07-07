#include <iostream>

using namespace std;

int main()

{

	int n, * array;

	cin >> n;

	if (n % 2)

		n++;

	array = new int[n];

	for (int i = 0; i < n; i++)

	{

		cin >> *(array + i);

	}

	for (int i = 0; i < n / 2; i++)

		cout << *(array + i) << " " << *(array + i + n / 2) << endl;

	system("pause");

	return 0;

}