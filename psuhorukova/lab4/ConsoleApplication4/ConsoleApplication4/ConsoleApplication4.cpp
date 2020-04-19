#include <iostream> //25 вариант
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");
    int i, j, k;
    int a;
    cout << "Все трехзначные числа, в десятичной записи которых нет одинаковых цифр" << endl;
    for (i = 1; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            for (k = 0; k <= 9; k++)
            {
                if ((i != j) && (j != k) && (i != k)) {
                    a = i * 100 + j * 10 + k;
                    cout << a << " ";
                }
            }cout << endl;
    }

    }
    int n;
    cout << "Введите n: ";
    cin >> n;
    double s = 1;
    double b = 0;
    while (s <= n) {
        b = b + (s + 1) / s;
        s++;
    }
    cout << "Сумма ряда: " << b << endl;
    int l = 1;
    double c = -2;
    double e;
    cout << "Введите е: ";
    cin >> e;
    cout << "Элементы последовательности: " << endl;
    cout << c << endl;
    while (abs(c)>e) {
        l++;
        c=c*(-2)/l;
        cout << c << endl;
    }
    cout << "Наименьший номер, для которого выполняется условие М: " << l << endl;
    const double PI = 3.14;
    double d, f, h, x, y;
    cout << "Введите левую границу отрезка a = ";
    cin >> d;
    cout << "Введите правую границу отрезка b = ";
    cin >> f;
    cout << "Введите шаг h = ";
    cin >> h;
    cout << "x" << "   " << "F(x)" << endl;
    for (x = d; x <= f; x = x + h) {
        y = sin(x * PI / 180) + 0.5 * cos(x * PI / 180);
        cout << x << "  " << y << endl;
    }
    cin.get();
    cin.get();
    return 0;

}

