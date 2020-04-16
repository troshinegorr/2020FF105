#include <iostream>
#include <math.h>

using namespace std;

int p(int n)
{
    int res = 1;
    for (int i = n + 1; i <= 2 * n; i++) {
        res *= i;
    }
    return res;
}

void main()
{
    setlocale(LC_ALL, "ru");
    int N;
    double a, sum, e;
    N = 0;
    a = 1.0 / p(N);
    sum = 0;
    cout << "Введите число e ";
    cin >> e;
    while (a >= e) {
        sum += a;
        N++;
        a = 1.0 / p(N);
    }
    cout << "Сумма чисел = " << sum << endl;

    system("pause");
}