#include <iostream>
using namespace std;

struct point // объявляем структуру point, имеющую два поля x и y типа double
{
    double x; // обращение к элементу поля будет такое: point_name.x
    double y; // обращение к элементу поля будет такое: point_name.y
};

bool foo(point p[]) // функция foo принимает в качестве параметра массив структурных элементов типа point и возвращает булевую переменную
{
    double a = (p[1].x - p[0].x) * (p[2].y - p[1].y) - (p[2].x - p[1].x) * (p[1].y - p[0].y),
        b = (p[2].x - p[0].x) * (p[3].y - p[2].y) - (p[3].x - p[2].x) * (p[2].y - p[0].y),
        c = (p[3].x - p[0].x) * (p[1].y - p[3].y) - (p[1].x - p[3].x) * (p[3].y - p[0].y);

    return (a >= 0 && b >= 0 && c >= 0) || (a <= 0 && b <= 0 && c <= 0) ? true : false;
}

bool prov(point p[]) // функция проверки, является ли нашь треуг. треугольником вобще
{
    return p[1].x == p[2].x && p[2].x == p[3].x ? 0 : // если p[1].x == p[2].x && p[2].x == p[3].x то возвращаем истину, иначе 
        p[1].y == p[2].y && p[2].y == p[3].y ? 0 : 1; // if (p[1].y == p[2].y && p[2].y == p[3].y истину, иначе ложь;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    const size_t n = 4;
    point p[n];
    cout << "\n\nВведите координаты точки: ";
    for (size_t i = 0; i < n; ++i)
    {
        if (i > 0) cout << "\n\nВведите координаты треугольника" << i << ": ";
        cout << "\n\nx" << i << " -> ";
        cin >> p[i].x;
        cout << "\n\ny" << i << " -> ";
        cin >> p[i].y;
    }

    if (prov(p))
    {
        if (foo(p))
            cout << "\n\tТочка принадлежит треугольнику" << endl;

        else
            cout << "\n\tТочка не принадлежит треугольнику" << endl;
    }

    else
        cout << "\n\tТреугольника не существует" << endl;

    return 0;
}