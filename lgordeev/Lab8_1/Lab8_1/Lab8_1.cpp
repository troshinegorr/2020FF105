#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Ru");
	int n;
	const int c = 100;
	cout << "Введите порядок матрицы: ";
	cin >> n;
	int mas[c][c] = { 0 };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			mas[i][j] = i + 1;
		}
	}
	cout << "Итоговая матрица:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == n - 1) {
				cout << mas[i][j] << "\n";
			}
			else {
				cout << mas[i][j] << " ";
			}
		}
	}
}