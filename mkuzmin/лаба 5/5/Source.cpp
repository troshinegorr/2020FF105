// вариант 18 задание 1 
#include <iostream>

#include <stdlib.h>

#include <math.h>

#include <locale>

using namespace std;

int main()

{

	setlocale(LC_ALL, "Russian");

	int n, k, i, sum, x;

	cout << "N = " << endl;

	cin >> n;

	k = n;

	x = -100;

	sum = 0;

	do

	{

		sum = sum + (k % 10);

		k = k / 10;

	} while (k != 0);

	for (i = 2; i <= (sum - 1); i++)

		if (sum % i == 0)

			if (i > x)

				x = i;

	if (x != -100) cout << "M = " << x << endl;

	else cout << "нет" << endl;

	system("pause");

}
// вариант 18 задание 2 
#include <iostream>

#include <stdlib.h>

#include <math.h>

#include <locale>

using namespace std;

int main()

{

	setlocale(LC_ALL, "Russian");

	int n, k, i;

	cout << "N = " << endl;

	cin >> n;

	k = 0;

	for (i = 1; i <= n; i++)

	{

		if ((i % 2 != 0) && (i % 3 != 0) && (i % 5 != 0))

			k++;

	}

	cout << "Кол-во чисел = " << k << endl;

	system("pause");

}
//вариант 18  задание 3 (задание 1 в документе) 
#include <iostream>
#include <string>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int k = 0;
	string nums = "";

	cout « "Введите к ";
	cin » k;

	for (auto i = 1; i <= k; ++i)
		nums.append(to_string(i));

	cout « nums.at(k - 1) « endl;

	system("pause");
}