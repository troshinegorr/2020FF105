// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <conio.h>
#include <string>

using namespace std;
int n = 0, i = -1, c = 0;
int arr[4];
string b, s="";

string Text(int c)
{
		switch (c)
		{
		case 0:  b = "0"; break;
		case 1:  b = "1"; break;
		case 2:  b = "2"; break;
		case 3:  b = "3"; break;
		case 4:  b = "4"; break;
		case 5:  b = "5"; break;
		case 6:  b = "6"; break;
		case 7:  b = "7"; break;
		case 8:  b = "8"; break;
		case 9:  b = "9"; break;
		case 10: b = "A"; break;
		case 11: b = "B"; break;
		case 12: b = "C"; break;
		case 13: b = "D"; break;
		case 14: b = "E"; break;
		case 15: b = "F"; break;
		}
	return(b);
}

int main()
{
	setlocale(LC_ALL, "ru");

	/*cout << "Задание 1" << endl;
	cout << "Введите натуральное число не больше 9999" << endl;
	cin >> n;
	while (n != 0)
	{
		i++;
		arr[i] = n % 10;
		n = n / 10;
	}
	if (i == 2)
	{
		if (arr[0] == arr[1] && arr[1] == arr[2])
		{
			c = 1;
		}
	}
	else
	{
		if (i == 3)
		{
			for (int a = 0; a < i; a++)
			{
				for (int b = 0; b < i; b++)
				{
					if (arr[a] == arr[b] && arr[a] == arr[i] && a != b)
					{
						c = 1;
					}
				}
			}
		}
	}
	if (c == 1)
	{
		cout << "Имеется 3 одинаковых цифры в числе" << endl;
	}
	else
	{
		cout << "Не имеется 3 одинаковых цифры в числе" << endl;
	}
	system("pause");

	cout << "Задание 2" << endl;
	cout << "Введите натуральное число не больше 9999" << endl;
	cin >> n;
	c = 0;
	for (int a = 1; a <= n; a++)
	{
		if ((n%a) == 0) 
		{
			c++;
			cout << "Делитель " << c << " = " << a << endl;
		}
	}
	system("pause");*/

	cout << "Задание 3" << endl;
	cout << "Введите натуральное число не больше 9999" << endl;
	cin >> n;
	do
	{
		c = n % 16;
		n = n / 16;
		b = Text(c);
		s = b + s;
	} while (n != 0);
	cout << "Число " << n << " в шестнадцатеричной СС равен " << s << endl;
	system("pause");
}

