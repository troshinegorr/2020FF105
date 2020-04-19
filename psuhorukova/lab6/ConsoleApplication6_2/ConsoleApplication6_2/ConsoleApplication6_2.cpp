#include <iostream>
using namespace std;

int period(int n) 
{
    int arr[1000];
    int i = 0;
    int k = 10;
    bool a=true;
    do {
        arr[i] = k / n;
        k = (k - n * (k / n)) * 10;
        for (int p = 0; p < i; p++)
        {
            if (arr[p]==arr[i])
            {
                a = false;
                break;
            }
        }
        if (a == true) { i++; }
    } while (a == true);
    for (int t = 0; t < i; t++)
    {
        if (arr[t]==arr[i])
        {
            i = i - t;
            break;
        }
    }
    return i;
}
int main()
{
   setlocale(0, "");
   int n;
   cout << "Введите n (n>1): ";
   cin >> n;
   int b;
   b = period(n);
   cout << "Длина периода: " << b << endl;
   cin.get(); cin.get();
   return 0;
}

