// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n, a, ch=0;

	cout << "Задание 1" << endl;

	do
	{
		cout << "Введите размер последовательности не меньше 2" << endl;
		cin >> n;
	} while (n < 2);
	int *A = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		cout << "Введите член последовательности" << endl;
		cin >> A[i];
	}
	for (int i = 1; i < n; i++)
	{
		if (A[i] > A[i - 1])
		{
			ch +=1;
		}
	}
	if (ch==n-1)
	{
		cout << "Последовательность возрастающая" << endl;
	}
	else
	{
		cout << "Последовательность не возрастающая" << endl;
	}

	cout << "Задание 2" << endl;

	do
	{
		cout << "Введите размер последовательности не меньше 2" << endl;
		cin >> n;
	} while (n < 2);
	ch = 0;
	A = (int*)realloc(A, n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		cout << "Введите член последовательности: 1 или 0" << endl;
		cin >> A[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (A[i]==0) 
		{
			ch += 1;
		}
	}
	for (int i = 0; i < ch; i++)
	{
		A[i] = 0;
	}
	for (int i = ch; i < n; i++)
	{
		A[i] = 1;
	}
	cout << "Ответ:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;

	cout << "Задание 3" << endl;

	do
	{
		cout << "Введите количество точек не меньше 4" << endl;
		cin >> n;
	} while (n < 4);
	n = 2 * n;
	A = (int*)realloc(A, n * sizeof(int));
	cout << "Введите координаты точек в следующем порядке: x1, у1, х2, у2, x3, y3 и т.д." << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < n; i += 2)
		for (int j = 0; j < n; j += 2)
		{
			ch = sqrt(pow(A[j] - A[i], 2) + pow(A[j + 1] - A[i + 1], 2));
			if (ch != 0)
			{
				for (int k = 0; k < n; k += 2)
				{
					if (((sqrt(pow(A[k] - A[i], 2) + pow(A[k + 1] - A[i + 1], 2)) == ch) and k!=j and k!=i) or ((sqrt(pow(A[k] - A[j], 2) + pow(A[k + 1] - A[j + 1], 2))) and k != j and k != i))
					{
						for (int v = 0; v < n; v += 2)
						{
							if ((((sqrt(pow(A[v] - A[i], 2) + pow(A[v + 1] - A[i + 1], 2)) == ch) and (sqrt(pow(A[v] - A[k], 2) + pow(A[v + 1] - A[k + 1], 2)) == ch)) and v != k) or
								(((sqrt(pow(A[v] - A[j], 2) + pow(A[v + 1] - A[j + 1], 2)) == ch) and (sqrt(pow(A[v] - A[k], 2) + pow(A[v + 1] - A[k + 1], 2)) == ch)) and v != k))
							{
								cout << "Квадрает получается из координат: " << "(" << A[i] << "," << A[i + 1] << ")" << " " << "(" << A[j] << "," << A[j + 1] << ")" << " " << "(" << A[k] << "," << A[k + 1] << ")" << " " << "(" << A[v] << "," << A[v + 1] << ")" << endl;
							}
						}
					}
				}
			}
		}

	cout << "Задание 4" << endl;

	do
	{
		cout << "Введите размер последовательности не меньше 2" << endl;
		cin >> n;
	} while (n < 2);
	ch = 0;
	A = (int*)realloc(A, n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		cout << "Введите член последовательности" << endl;
		cin >> A[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (A[i] > A[i + 1])
		{
			a = A[i];
			A[i] = A[i + 1];
			A[i + 1] = a;
			ch += 1;
		}
	}
	cout << "Ответ:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
	cout << "Количество перестановок: " << ch << endl;
}
