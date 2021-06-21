#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int j, a, b, k, s = 0;
    cout << "Введите a=";
    cin >> a;
    cout << "Введите b=";
    cin >> b;
    cout << "Введите k=";
    cin >> k;
    for (j = a; j <= b; j++)
    {
        a = j;
        for (a; a; a /= 10) if (a % 10 == k)
        {
            s += j;
            break;
        }
    }
    cout << "Сумма чисел содержащих " << k << " составляет " << s;
    return 0;
}