#include <iostream>

using namespace std;

int main()

{

	const int N = 10; int A[N] = { 0 };

	for (int index = 0; index < N; index++)

	{

		A[index] = std::rand() % 9 + 1;

		cout << A[index] << " ";

	}

	cout << endl;

	int min_i = -1; double avg = 0.;

	for (int index = 0; index < N; index++)

		if (A[index] < A[min_i] || min_i == -1) min_i = index;

	cout << "Amin[" << min_i << "] = " << A[min_i] << endl;

	for (int index = 0; index < N; index++)

		avg += A[index] / (double)N;

	cout << "avg = " << avg << endl;

	int count = 0;

	for (int index = 0; index < N; index++)

		if (A[index] == A[min_i]) count++;

	cout << "count = " << count << endl;

	for (int index = 0; index < N && count > 1; index++)

		if (A[index] == A[min_i]) A[index] = int(avg);

	for (int index = N - 1; index >= 0 && count == 1; index--)

		if (A[index] == A[min_i])

		{

			A[index] = int(avg);

			count = 0;

		}

	for (int index = 0; index < N; index++)

		cout << A[index] << " ";

	cout << endl;

	cin.get();

}
