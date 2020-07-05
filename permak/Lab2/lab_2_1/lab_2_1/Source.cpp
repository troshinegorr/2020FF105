#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double a, b, c, n, N;
	cout << "Введите A,B,C и время разговора ";
	cin >> a >> b >> c >> n;
	N = ((n - (n - a)) * b + (n - a) * c);
	cout << "Плата составит " << N;		
}
