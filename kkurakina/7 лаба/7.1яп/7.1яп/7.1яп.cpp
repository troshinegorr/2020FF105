#include <iostream>

#include <cstdlib>

#include <ctime>

using namespace std;

int main()

{

	setlocale(0, "");

	srand((unsigned)time(NULL));

	int smaller, bigger, equal;

	smaller = bigger = equal = 0;

	int N, K;

	cin >> N >> K;

	double mas[100];

	for (int i = 0; i < N; ++i) {

		mas[i] = (rand() % 200) / 10.0;

		cout << mas[i] << " ";

		if (mas[i] < K)

			++smaller;

		else if (mas[i] == K)

			++equal;

		else if (mas[i] > K)

			++bigger;

	}

	cout << endl;

	cout << "Меньше K " << smaller << " чисел" << endl;

	cout << "Равно K " << equal << " чисел" << endl;

	cout << "Больше K " << bigger << " чисел" << endl;

	system("pause>0");

	return 0;

}
