#include <iostream>

using namespace std;

int sum(int n)

{

	if (n / 10 != 0)

		return n % 10 + sum(n / 10);

	else

		return n % 10;

}

int main()

{

	setlocale(LC_ALL, "Russian");

	int n;

	cout << "¬ведите натуральное число ";

	cin >> n;

	cout << "—умма цифр натурального числа " << sum(n) << endl;

}