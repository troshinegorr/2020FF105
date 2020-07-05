#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int a,b;
	cout << "¬ведите год ";
	cin >> a;
	b = a % 12;
	switch (b)
	{
	case 0:cout << "год обезь€ны"; break;
	case 1:cout << "год петуха"; break;
	case 2:cout << "год собаки"; break;
	case 3:cout << "год свиньи"; break;
	case 4:cout << "год крысы"; break;
	case 5:cout << "год коровы"; break;
	case 6:cout << "год тигра"; break;
	case 7:cout << "год зайца"; break;
	case 8:cout << "год дракона"; break;
	case 9:cout << "год змеи"; break;
	case 10:cout << "год лошади"; break;
	case 11:cout << "год овцы"; break;
	case 12:cout << "год обезь€ны"; break;
	}
	
}