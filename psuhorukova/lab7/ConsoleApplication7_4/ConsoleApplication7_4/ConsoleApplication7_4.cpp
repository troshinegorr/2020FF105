#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, i, b, j;
    cout << "n = "; 
    cin >> n;
    int *a = new int[n];
    cout << "Введите последовательность чисел: " << endl;
    for (i = 0; i < n; i++) 
        {
          cout << "a[" << i << "]= ";
          cin >> a[i];
        }
    for (j = 1; j < n; j++)
    {
        for (i = 0; i < n - j; i++)
            if (a[i] < a[i + 1])
            {
                b = a[i];
                a[i] = a[i + 1];
                a[i + 1] = b;
            }
    }
    for (i = 0; i < n; i++) cout << a[i] << "\t"; 
    delete[] a;
    cin.get(); cin.get();
    return 0;
}