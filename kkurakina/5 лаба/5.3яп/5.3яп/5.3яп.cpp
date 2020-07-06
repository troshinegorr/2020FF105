#include <iostream>

#include <conio.h>

using namespace std;

void BinDec(char* bin, int size)

{

	int rez(0), i;

	cout << "Десятичное число: " << endl;

	for (i = size - 1; i >= 0; --i)

		rez += (bin[i] - 48) << i;

	cout << rez << endl;

}

char* DecBin(int chislo, int size)

{

	int i;

	char* bin = new char[size];

	cout << "Двоичный код: " << endl;

	for (i = size - 1; i >= 0; --i)

	{

		if (!((i + 1) % 8))

			cout << ' ';

		cout << (bin[i] = ((chislo >> i) & 1) + 48);

	}

	cout << endl;

	return bin;

}

int main()

{

	setlocale(LC_ALL, "Russian");

	int chislo, size(sizeof(chislo) * 8);

	cout << "Введите число: " << endl;

	cin >> chislo;

	BinDec(DecBin(chislo, size), size);

	system("pause");

	return EXIT_SUCCESS;

}