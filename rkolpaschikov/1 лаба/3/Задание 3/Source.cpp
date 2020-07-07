#include<iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double x;

	cout << "¬ведите число:";
	cin >> x;
	if (pow(sqrt(x), 2) == x)
		cout << "True";
	else
		cout << "False";

	

	
	
	

}