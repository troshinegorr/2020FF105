#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n, i, k;
	cout << "Введите цифру" << endl;
	cin >> n;
	k = n / 4;
	i = n % 4;
	switch (i)
	{
	case 1:cout << "n=4 *" << k << "+1"; break;
	case 2:cout << "n=4 *" << k << "+2"; break;
	case 3:cout << "n=4*" << k << "+3"; break;
	default: cout << "n=4*" << k; break;

		
	
	}


}