#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int N;
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
		if (a[i] > i)
			cout << "a[" << i << "]=" << a[i] << ' ';
	}
	system("pause");
	return 0;
}