#include <iostream> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int k = 0, b = 0, t = 0;
	for (int i = 0; i < 10; i++) {
		if ((100 - 19 * b) % 9 == 0) {
			k = (100 - 19 * b) / 9;
			t = 100 - b - k;
			break;
		}
		b++;
	}
	cout << "Быков = " << b  << "\nКоров = " << k << "\nТелят = " << t << endl;
	system("pause");
	return 0;
}