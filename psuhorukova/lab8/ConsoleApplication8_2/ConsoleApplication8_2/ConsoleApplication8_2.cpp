#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, t;
    cout << "Введите количество строк матрицы n = ";
    cin >> n;
    cout << "Введите количество столбцов матрицы t = ";
    cin >> t;
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[t];
    }
    cout << "Введите элементы матрицы: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < t; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 0; j < t; j++)
        {
            a[i][j] = a[i][j] - a[n - 1][j];
        }
    }
    cout << "Матрица после преобразования: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < t; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        delete a[i];
    }
    delete[] a;
    cin.get(); cin.get();
    return 0;
}


