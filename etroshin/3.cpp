#include <iostream>
#include <cstdlib>// для system (pause)
using namespace std;
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Rus");
    int n, x;
    int days;
    cout << "Введите номер месяца:";
    cin >> n;
    cout << "Введите год:";
    cin >> x;
    if ((n == 4) || (n == 6) || (n == 9) || (n == 11))
    {
        days = 30;
    }
    else
    {
        if (n == 2)
        {
            if ((x % 400 == 0) or ((x % 100 != 0) and (x % 4 == 0))) days = 29;
            else days = 28;
        }
        else days = 31;
    }
    cout << days;
    return 0;
}