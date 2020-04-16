#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double a, b, h, x;
    cout << "Введите отрезок от a до b ";
    cin >> a >> b;
    cout << "Введите шаг h ";
    cin >> h;
    for (double i = a; i <= b; i += h) {
        x = sin(i) - cos(i);
        cout << "x = " << i << "    F(x)= " << x << endl;
    }
}