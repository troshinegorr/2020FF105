#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Ru");
	int n, m, min, max, indmin, indmax, imin, imax, resmin, resmax, fl = 1;
	const int c = 100;
	cout << "Введите количество строк в матрице: ";
	cin >> n;
	cout << "Введите количество столбцов в матрице: ";
	cin >> m;
	int mas[c][c] = { 0 };
	cout << "Введите матрицу: ";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mas[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		min = 1e6;
		max = -1e6;
		for (int j = 0; j < m; j++) {
			if (mas[i][j] > max) {
				max = mas[i][j];
				indmax = j;
				resmax = mas[i][j];
			}
			if (mas[i][j] < min) {
				min = mas[i][j];
				indmin = j;
				resmin = mas[i][j];
			}
		}
		min = 1e6;
		max = -1e6;
		for (int k = 0; k < n; k++) {
			if (mas[k][indmax] < min) {
				min = mas[k][indmax];
				imin = k;
			}
			if (mas[k][indmin] > max) {
				max = mas[k][indmin];
				imax = k;
			}
		}
		if (max == resmin) {
			if (fl) {
				cout << "Седловые точки матрицы:\n";
				fl = 0;
			}
			cout << "(" << imax << ", " << indmin << ")\n";
		}
		if (min == resmax) {
			if (fl) {
				cout << "Седловые точки матрицы:\n";
				fl = 0;
			}
			cout << "(" << imin << ", " << indmax << ")\n";
		}
	}
	if (fl) {
		cout << "Седловых точек нет.";
	}
}