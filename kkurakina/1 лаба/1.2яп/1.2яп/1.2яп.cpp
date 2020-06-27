#include <iostream>
#include<math.h>
using namespace std;
int main(void)
{
	double a, d, n;
	float S;
	setlocale(LC_ALL, "Ru");
	cout << "Введите значение a d n ";
	cin >> a >> d>>n;
	S = ((2 * a + d * (n - 1)) / 2) * n;
	cout << "Ответ " << S;

}