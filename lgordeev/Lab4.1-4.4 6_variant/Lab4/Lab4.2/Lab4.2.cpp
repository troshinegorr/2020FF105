#include <iostream>
# include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int n = 0;
    double x, S = 0, a;
    cout << "Введите x и n ";
    cin >> x >> n;
    for (int i = 0; i < n; i++) {
        a = sin(x);
        for (int j = 0; j < i; j++) {
            a = sin(a);
        }
        S = S + a;
    }
    cout << "S = " << S;
    
    return 0;
}