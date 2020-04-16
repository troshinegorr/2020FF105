#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int n, m, k, mas[10] = { 0 };
    cout << "Введите n ";
    cin >> n;
    if (n == 0) {
        cout << "0";
        return 0;
    }
    while (n > 0) {
        k = n % 10;
        mas[k]++;
        n = n / 10;
    }
    for (int i = 1; i < 10; i++) {
        if (mas[i] != 0) {
            cout << i;
            mas[i]--;
            break;
        }
    }
    for (int i = 0; i < 10; i++) {
        while (mas[i] > 0) {
            cout << i;
            mas[i]--;
        }
    }
}