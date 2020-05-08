#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int N;
    double sum = 0;
    cout << "Введите число элементов последовательности: ";
    cin >> N;
    float *a = new float[N];
    cout << "Введите элементы последовательности: " << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    int f0 = 0;
    int f1 = 1;
    int f2 = 1;
    while (f0 < N)
    {
        sum = sum + a[f0];
        f2 = f0 + f1;
        f0 = f1;
        f1 = f2;
    }
    double s = sum - a[1];
    cout << "Сумма чисел, порядковые номера которых являются числами Фибоначчи: " << s << endl;
    delete [] a;
    cin.get(); cin.get();
    return 0;
}

