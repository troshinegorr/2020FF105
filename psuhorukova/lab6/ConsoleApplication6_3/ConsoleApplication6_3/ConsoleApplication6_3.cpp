#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int  translate (char* stroka, int p, int a)
{   
    char ch = stroka[a - 1];
    if (a > 1) {
        return( atoi(&ch) + translate(stroka, p, a - 1)*p);
    }
    else return (atoi(&ch));
}
int main()
{
    setlocale(0, "");
    int p;
    char stroka[1000] = "";
    cout << "Введите номер системы счисления p (2<=p<=9): ";
    cin >> p;
    cout << "Введите строку символов: ";
    cin >> stroka;
    int a;
    a = strlen(stroka);
    int n;
    n = translate(stroka, p, a);
    cout << "Число в десятичной системе счисления: " << n << endl;
    cin.get(); cin.get();
    return 0;
}

