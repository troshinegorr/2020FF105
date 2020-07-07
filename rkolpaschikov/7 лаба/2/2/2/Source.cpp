#include <iostream>

using namespace std;

int main()

{

	int n;

	int array[100];

	cin >> n;

	int i, j, size = n;

	for (i = 0; i < size; ++i)

		cin >> array[i];

	for (i = 0; i < size; ++i)

		if (i % 2 != 0)

		{

			for (j = i; j < size; ++j)

				array[j] = array[j + 1];

			size--;

		}

	for (i = 0; i < size; ++i)

		std::cout << array[i] << " ";

	std::cout << std::endl;

	system("pause");

	return 0;

}