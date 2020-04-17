#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");
    int N, A;
    int l = 0;
    cout << "Введите натуральное N: ";
    cin >> N;
    bool a = true;
    A = N;
    while (a)
    {
        N = N / 10;
        l = l + 1;
        if (N <= 0)
        {
            a = false;
            break;
        }
    }
    int b, c, d, e, M;
    if (l == 5) {
        b = A / 10000;
        c = A % 10000 / 1000;
        d = A % 100 / 10;
        e = A % 10;
        M = b * 1000 + c * 100 + d * 10 + e;
    }
    else {
        M = A;
    }
    cout << "M = " << M << endl;
    int K, n, p = 1;
    int m = 0;
    cout << "Введите натуральное число N: ";
    cin >> K;
    while (K > 0) {
        n = K % 10;
        if (n > m) {
            m = n;
            p = 1;
        }
        else {
            if (n == m) {
                p = p + 1;
            }
        }
        K = K / 10;
    }
    cout << "Количество цифр с наибольшим значением: " << p << endl;
    int k, t, i, j, h;
    cout << "Введите k= ";
    cin >> k;
    t = 0;
    i = 0;
    do {
        t = t + 1;
        j = t;
        while (j > 0) {
            j = j / 10;
            i = i + 1;
        };
    } while (i < k);
    while (i >= k) {
        h = t % 10;
        t = t / 10;
        i = i - 1;
    }
    cout << "к-ая цифра = " << h << endl;

    cin.get(); cin.get();
    return 0;
}

