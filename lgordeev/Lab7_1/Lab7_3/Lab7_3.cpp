#include <iostream>
#include <math.h>

using namespace std;

bool check(int n) {
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}

int main() {
	setlocale(LC_ALL, "ru");
	int n, fl = 1;
	const int c = 1000;
	cout << "Введите количество элементов массива: ";
	cin >> n;
	int mas[c];
	cout << "Введите элементы массива через пробел: ";
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
	}
	for (int i = 0; i < n; i++) {
		if (check(mas[i])) {
			if (fl) {
				cout << "Номера простых чисел: ";
				fl = 0;
			}
			cout << i+1 << " ";
		}
	}
	if (fl) {
		cout << "Простых чисел нет";
	}
}