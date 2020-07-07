#include<iostream> 

using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	
	double x, x1, a;
	cout << "Введите число X:" << endl;
	cin >> x1;
	a = 3.2;
	if (x1 < a)
	{
		x = (pow(x1, 4)) + 9;
		cout << "При данном X значение функции равняется:" << x << endl;
	}
	else
		if (x1 >= a)
		{
			x = 54 * (pow(x1, 4)) / (-5 * (pow(x1, 2)) + 7);
			cout << "При данном X значение функции равняется:" << x << endl;
		}
	





}
