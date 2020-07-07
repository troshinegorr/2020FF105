#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n;
	cout << "Введите кол-во лепестков:";
	cin >> n;
	if (n % 2 == 0)
	{
		cout << "Любит" << endl;

	}
	else
		cout << "Не любит" << endl;
}