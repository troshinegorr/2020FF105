#include <iostream>

#include <cmath>

using namespace std;

int main()

{

	int N, count = 0;

	cin >> N;

	while (N % 10 == 0)

	{

		count++;

		N /= 10;

	}

	cout << count << endl;

	system("pause");

	return 0;

}