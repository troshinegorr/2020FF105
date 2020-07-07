// вариант 18 задание 1 
#include <iostream>

#include <cstdlib>

#include <ctime>

using namespace std;

int main()

{

	setlocale(0, "");

	int N, i, a;

	double K = 0;

	a = 0;

	cout << "Введите кол-во банков " << endl;

	cin >> N;

	double mas[100];

	cout << "Введите курс доллара к рублю в банках " << endl;

	for (int i = 1; i <= N; ++i)

	{

		cin >> mas[i];

	}

	for (int i = 1; i <= N; ++i)

	{

		if (K < mas[i])

		{

			K = mas[i];

			a = i;

		}

	}

	cout << "Выгоднее всего обменять $ в " << a << " банке по курсу " << K << endl;

	system("pause>0");

	return 0;

}
// вариант 18 задание 2 
include<iostream>

int main()

{

	std::cout << "Enter N: ";

	int N = 0;

	std::cin >> N;

	int* mas = new int[N];

	for (int i = 0; i < N; ++i)

	{

		mas[i] = rand() % 10;

		std::cout << mas[i] << " ";

	}

	int* odd = new int[N];

	int* n_odd = new int[N];

	int j = 0;

	for (int i = 0; i < N; i += 2)

	{

		odd[j] = mas[i];

		n_odd[j] = mas[i + 1];

		++j;

	}

	std::cout << std::endl;

	for (int i = 0; i < N / 2 + 1; ++i)

		std::cout << odd[i] << " ";

	std::cout << std::endl;

	for (int i = 0; i < N / 2; ++i)

		std::cout << n_odd[i] << " ";

	system("pause>>null");

}
// вариент 18 задание 3 (задание 1 в документе)
#include <iostream>

#include <cstdlib>

#include <ctime>

using namespace std;

int main()

{

	int i, j, k;

	time_t t;

	srand(time(&t));

	int array[30];

	for (i = 0; i < 32; i++)

		cout << (array[i] = rand() % 10 - 5) << " ";

	for (k = (i = 0); i < 30; i++)

	{

		if (0 < array[(j = i)])

		{

			while (0 < array[j] && j < 30)

				j++;

			if (j < 30)

			{

				array[j] += array[k];

				array[k] = array[j] - array[k];

				array[j] = array[j] - array[k];

				k++;

			}

		}

	}

	cout << endl;

	cout << "sorted array\n";

	for (i = 0; i < 30; i++)

		cout << array[i] << " ";

	cout << endl;

	system("pause");

	return 0;

}