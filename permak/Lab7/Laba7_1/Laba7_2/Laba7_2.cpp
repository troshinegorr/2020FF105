#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int N;
	int min = 9999999;
	setlocale(LC_ALL, "Russian");
	int a[100];
	cin >> N;
	cout << "Введите элементы целочисленного массива: \n";
	for (int i = 1; i <= N; i++)
	{
		cin >> a[i];
	}
	cout << "Получен целочисленный массив с элементами: \n";
	for (int i = 1; i <= N; i++)
	{
		if (a[i] < min)
			min = a[i];
	}
	for (int i = 1; i <= N; i++)
	{
		if (a[i] != min)
			cout << a[i] << endl;
	}
	system("pause");
	return 0;
}