// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int math(int a, int b, int c, int k)
{
	int max;
	if (a > b and a > c) max = a;
	if (b > a and b > c) max = b;
	if (c > a and c > b) max = c;
	for (int i = max; i >= max; i++)
	{
		if ((i%a) == 0 and (i%b) == 0 and (i%c) == 0)
		{
			k = i;
			break;
		}
	}
	return (k);
}

int random(int k, int N)
{
	int x;
	x = rand() % N;
	return (x);
}

double f(double x)
{
	return (x*x - 81);
}

double dihotomia(double a, double b, double c)
{
	double ksi = (a + b) / 2;
	if ((fabs(f(a) - f(b)) <= c) || (fabs(f(ksi) <= c))) return (ksi);
	if ((f(a)*f(ksi))<=0)
	{
		dihotomia(a, ksi, c);
	}
	else
	{
		dihotomia(ksi, b, c);
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	int N, k=0;
	int z;
	double a, b, c;
	
	/*cout << "Задание 1" << endl;
	cout << "Введити первое натуральное число" << endl;
	cin >> a;
	cout << "Введити второе натуральное число" << endl;
	cin >> b;
	cout << "Введити третье натуральное число" << endl;
	cin >> c;
	k = math(a,b,c,k);
	if (k==0)
	{
		cout << "Наименьшего общего делителя нет" << k << endl;
	}
	else
	{
		cout << "Наименьший общий делитель равен " << k << endl;
	}
	system("pause");

	cout << "Задание 2" << endl;
	cout << "Введити первое натуральное число" << endl;
	cin >> k;
	cout << "Введити второе натуральное число" << endl;
	cin >> N;
	z = k + N;
	int *A = (int*)malloc(z * sizeof(int));
	for (int i = 0; i < z; i++)
	{
		A[i] = random(k, N);
		k = k - A[i];
		if (k < N)
		{
			N = k;
		}
	}
	for (int i = 0; i < z; i++)
	{
		cout << A[i] << " ";
	}
	system("pause");*/

	cout << "Задание 3" << endl;
	cout << "Введити a" << endl;
	cin >> a;
	cout << "Введити b" << endl;
	cin >> b;
	cout << "Введити e" << endl;
	cin >> c;
	cout << dihotomia(a, b, c) << endl;
}
