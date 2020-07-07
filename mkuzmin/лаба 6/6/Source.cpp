// вариант 18 задание 1 
#include<stdio.h>

#include <iostream>

#include <stdlib.h>

#include <math.h>

#include <locale>

#define N 10

using namespace std;

double funct(int n);

void vyvod(int n, double mas[N]);

int main()

{

	double a[N];

	int x, i;

	do {

		printf("Vvedite kol-vo elementov: ");

		cin >> x;

	} while (x<0 || x>N);

	for (i = 1; i < (x + 1); i++)

		a[i - 1] = funct(i);

	printf("Massiv: \n");

	vyvod(x, a);

}

double funct(int n)

{

	double k = 1, mas;

	for (int i = 1; i < (n + 1); i++)

		k = k * i;

	mas = 1 / k;

	return mas;

}

void vyvod(int n, double mas[N])

{

	for (int i = 0; i < n; i++)

		printf("%lf ", mas[i]);

}
// вариант 18 задание 3(3 в документе)
#include <iostream>

using namespace std;

unsigned long long bci(int n, int k);

const int MAX = 68;

// расчет C(n,k)

unsigned long long bci(int n, int k)

{

	if (k > n / 2) k = n - k;

	if (k == 1) return n;

	if (k == 0) return 1;

	return bci(n - 1, k) + bci(n - 1, k - 1);

}

int main()

{

	int N, M;

	cout << "VVedite M = ";

	cin >> M;

	cout << "VVedite N = ";

	cin >> N;

	if ((M >= 0 && N >= 0 && N >= M) && ((N <= MAX) && (M <= MAX)))

	{

		cout << "C(" << N << "," << M << ") = " << bci(N, M) << endl;

	}

	else cout << "ERROR" << endl;

	return 0;

}