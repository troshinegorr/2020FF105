// ConsoleApplication10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a[20];
	int q;
	a[0] = 1;
	for (int i = 1; i < 20; i++)
	{
		a[i] = 0;
	}
	for (int i = 0; i < 64; i++)
	{
		q = 0;
		for (int j = 0; j < 20; j++)
		{
			a[j] = a[j] * 2 + q;
			q = a[j] / 10;
			a[j] %= 10;
		}
	}
	a[0] -= 1;
	cout << "Ответ: ";
	for (int i = 19; i >= 0; i--)
	{
		cout << a[i];
	}
}

