#include <iostream>
using namespace std;
int main()
{
    int n, nSum = 0, temp, iSum = 0, C = 0;
    setlocale(LC_ALL, "Russian");
    cin >> n;
    temp = n;
    while (temp > 0)
    {
        nSum += temp % 10;
        temp /= 10;
    }
    for (int i = 1; i < n; i++) {
        temp = i;
        while (temp > 0)
        {
            iSum += temp % 10;
            temp /= 10;
        }
        if (iSum == nSum) {
            cout << i << endl;
            C++;
        }
        iSum = 0;
    }
    if (C == 0) cout << "нет";
}