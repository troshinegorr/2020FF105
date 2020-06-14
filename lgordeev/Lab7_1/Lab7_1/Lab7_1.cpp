#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL,"ru");
    const int size = 100;
    int max = 0, min = 0;
    int b, temp, razn = 1e10, res = 1e10;
    int arr[size];

    cout << "Введите количество элементов массива ";
    cin >> b;
    for (int i = 0; i < b; i++) {
        cout << "Значение " << i << " = ";
        cin >> arr[i];
    }
    for (int i = 0; i < b - 1; i++) {
        for (int j = i + 1; j < b; j++) {
            temp = abs(arr[i] - arr[j]);
            if (temp && temp < razn) {
                razn = temp;
            }
        }
        if (razn < res) {
            res = razn;
        }
    }
    cout << "Наименьшая длина числовой оси = " << res;
}