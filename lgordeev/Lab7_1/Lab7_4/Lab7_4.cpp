#include <iostream>

using namespace std;

int i, j, n, d, s;
int Shell(int A[], int n)
{
	d = n;
	d = d / 2;
	while (d > 0)
	{
		for (i = 0; i < n - d; i++)
		{
			j = i;
			while (j >= 0 && A[j] > A[j + d])
			{
				s = A[j];
				A[j] = A[j + d];
				A[j + d] = s;
				j--;
			}
		}
		d = d / 2;
	}
	for (i = 0; i < n; i++) cout << A[i] << " ";
	return n;
}


int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Размер массива > "; cin >> n;
	int* A = new int[n];
	for (i = 0; i < n; i++)
	{
		cout << i + 1 << " элемент > "; cin >> A[i];
	}
	cout << "Результирующий массив: \n";
	Shell(A, n);
}