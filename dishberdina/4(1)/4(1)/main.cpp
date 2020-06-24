#include <iostream>
#include <math.h>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, s1, s2;
    cout << "введите размер стипендии ";
    cin >> a;
    cout << "введите размер расходов ";
    cin >> b;
    s1 = 10 * a;
    s2 = 0;
    for (int i = 1; i < 10; i++)
    {
        s2 = s2 + b;
        b = b * 1.03;
    };
    cout << "стипендия за 10 месяцев = " << s1;
    cout << "расходы за 10 месяцев = " << s2;
    if (s2 <= s1)
    {
        cout << "хватит стипендии ";
    }
    else
    {
        cout << "нужно попросить у родителей" << s2 - s1 << "рублей";
    }
}
