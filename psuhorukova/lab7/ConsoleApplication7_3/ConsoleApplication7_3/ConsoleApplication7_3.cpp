#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите количество чисел в массиве: " << endl;
    cin >> n;
    int* a = new int[n];
    bool b = true;
    do
    {
        cout << "Введите четырехзначные натуральные числа, элементы массива:"<<endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        b = true;
        for (int k = 0; k < n; k++)
        {
            if ((a[k] / 1000 == 0) || (a[k] / 10000 != 0))
            {b = false;}
        }
        if (b == false) 
        {
            cout << "Введите элементы массива заново" << endl;
        }
    } while (b == false);
    bool c = true;
    cout << "Числа, у которых сумма первых двух цифр равна сумме двух последних: "<<endl;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] / 1000 + a[i] % 1000 / 100) == (a[i] % 100 / 10 + a[i] % 10))
        {
            cout << a[i] << endl;
            c = false;
        }
    }
    if (c == true) {
        cout << "Таких чисел нет" << endl;
    }
    delete[] a;
    cin.get(); cin.get();
    return 0;
}