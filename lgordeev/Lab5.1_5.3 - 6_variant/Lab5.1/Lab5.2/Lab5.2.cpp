#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int n;
    cout << "Введите n ";
    cin >> n;
    for (int a = 1; a < n - 1; a++)
    {
        for (int b = 1; b < n - 1; b++)
        {
            for (int c = 1; c < n; c++)
            {
                if ((a * a + b * b) == (c * c))
                    cout << " a = " << a << " b = " << b << " c = " << c << endl;
            }
        }
    }
    return 0;
}