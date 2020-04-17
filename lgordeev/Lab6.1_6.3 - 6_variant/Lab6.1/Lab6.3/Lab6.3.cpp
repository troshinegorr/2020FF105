#include <iostream>
#include <string> 

using namespace std;

bool Simm(const string & s, int l, int r) {
    if (l < r)
        return (s[l] == s[r] && Simm(s, l + 1, r - 1));
    else
        return true;
}

int main()
{
    setlocale(LC_ALL, "ru");
    string s;
    int i, j;
    cout << "Введите строку : ";
    cin >> s;
    cout << "Введите начальный индекс: ";
    cin >> i;
    cout << "Введите конечный индекс: ";
    cin >> j;
    if (Simm(s, i, j)) {
        cout << "Строка симметрична ";
    }
    else {
        cout << "Строка не симметрична ";
    }
}