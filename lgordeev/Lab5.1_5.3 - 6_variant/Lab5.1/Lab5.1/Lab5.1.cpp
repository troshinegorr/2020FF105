#include<iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int n, k, t;
    cout << "Введите числа n, k и t ";
    cin >> n >> k >> t;
    int a = n * k;
    if (a == 0 && t == 0) {
        cout << "В записи числа n*k есть цифра t";
        return 0;
    }
    while (a) {
        if (a % 10 == t) {
            cout << "В записи числа n*k есть цифра t";
            return 0;
        }
        a /= 10;
    }
    cout << "В записи числа n*k нет цифры t";
    return 0;
}