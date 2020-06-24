#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int i;
    int count = 0;
    int* A;
    int n;
    cout << "Введите размерность массива: ";
    cin >> n;
    A = new int[n];
    cout << "Введите оценки: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Оценка " << i + 1 << " учащегося ";
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
        if (A[i] < 3) count++;
    cout << "Не допущено к следующему экзамену " << count << endl;
    system("pause");
    return 0;
}