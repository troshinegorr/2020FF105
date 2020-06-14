#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int n;
    double array[1000];
    cout << "Введите число элементов массива ";
    cin >> n;

    if (n == 0) return 0;

    for (int i = 0; i < 2 * n; i++) {
        cout << "Элемент массива " << i << " = ";
        cin >> array[i];
    }

    int left = 0;
    int right = 2 * n - 1;

    double max = array[left] + array[right];
    while (left < right) {
        if (array[left] + array[right] > max) {
            max = array[left] + array[right];
        }
        left++; 
        right--;
    }
    cout << "Максимальная сумма = " << max << endl;

}