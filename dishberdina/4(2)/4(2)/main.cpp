#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned long n;
    double p;
    cout << "Enter n: ";
    cin >> n;
    p = 1;
    for (double i = 2; i <= n;i++)
    {
        p = p * (1. - 1. / (i*i));
    }

    cout << "res: " << p<< endl;
    system("PAUSE");
    return 0;
}