#include <iostream>

#include <string>

#include <stdlib.h>

#include <time.h>

#include <conio.h>

#define SIZE 5

using namespace std;

int main()

{

	srand(time(NULL));

	int** arr = new int* [SIZE];

	for (int i = 0; i < SIZE; i++)

		arr[i] = new int[SIZE];

	for (int i = 0; i < SIZE; i++)

	{

		for (int j = 0; j < SIZE; j++)

		{

			arr[i][j] = rand() % 40 + 10;

			cout << arr[i][j] << " ";

		}

		cout << endl;

	}

	cout << endl;

	for (int i = 0; i < SIZE; i++)

	{

		for (int j = i + 1; j < SIZE; j++)

		{

			if (i != j)

			{

				int tmp = arr[i][j];

				arr[i][j] = arr[j][i];

				arr[j][i] = tmp;

			}

		}

	}

	for (int i = 0; i < SIZE; i++)

	{

		for (int j = 0; j < SIZE; j++)

			cout << arr[i][j] << " ";

		cout << endl;

	}

	delete[] arr;

	return 0;

}