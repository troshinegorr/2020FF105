#include<iostream>
using namespace std;
void main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c, d, p, n, i;
    cout << "введите a" << endl;
    cin >> a;
    cout << "введите b" << endl;
    cin >> b;
    cout << "введите c" << endl;
    cin >> c;
    cout << "введите d" << endl;
    cin >> d;
    p = a * c;
    n = b * d;
    i = 2;
    while (i <= p)
    {
        if (p % i == 0 && n % i == 0)
        {
            p = p / i;
            n = n / i;
        }
        else
            i++;
    }
    cout << p << "/" << n;
}