#include <iostream>
#include <cmath>
using namespace std;

double dlina(double x1, double y1,double x2, double y2)
{
    double a;
    a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return a;
}

int main()
{
    setlocale(0, "");
    double x1, x2, x3, y1, y2, y3;
    cout << "Введите координаты вершин труегольника: x1 ";cin >> x1; 
    cout << "y1 "; cin >> y1; 
    cout << "x2 "; cin >> x2; cout << "y2 "; cin >> y2;
    cout << "x3 "; cin >> x3; cout << "y3 "; cin >> y3;
    double a, b, c;
    a = dlina(x1, y1, x2, y2);
    b = dlina(x2, y2, x3, y3);
    c = dlina(x3, y3, x1, y1);
    double p;
    p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "Площадь треугольника: " << s << endl;
    cin.get(); cin.get();
    return 0;
}

