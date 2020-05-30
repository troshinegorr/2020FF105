// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n, m, a, b, c, min, max;

	/*cout << "Задание 1" << endl;

	cout << "Введите порядок квадратной матрицы" << endl;
	cin >> n;
	a = n+1;
	int **A = new int*[n];
	for (int i = 0; i < n; i++)
	{
		A[i] = new int[n];
	}
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = n - 1; j >= 0; j--)
		{
			if (i == j)
			{
				A[i][j] = a * (a - 1);
			}
			else
			{
				A[i][j] = 0;
			}
		}
		a -= 1;
	}
	A[n - 1][n - 1] = n * (n + 1);
	cout << "Ответ:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");*/

	cout << "Задание 2" << endl;

	cout << "Введите число строк матрицы" << endl;
	cin >> n;
	cout << "Введите число столбцов матрицы" << endl;
	cin >> m;
	int **B = new int*[n];
	for (int i = 0; i < n; i++)
	{
		B[i] = new int[m];
	}
	cout << "Введите элементы массива" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> B[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		max = 0;
		for (int j = 0; j < m; j++)
		{
			if (B[i][j] > max)
			{
				max = B[i][j];
				b = j;
			}
		}
		a = B[i][0];
		B[i][0] = max;
		B[i][b] = a;
		min = B[i][0];
		for (int j = 0; j < m; j++)
		{
			if (B[i][j] < min)
			{
				min = B[i][j];
				c = j;
			}
		}
		a = B[i][m-1];
		B[i][m-1] = min;
		B[i][c] = a;
	}
	cout << "Ответ:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
}
