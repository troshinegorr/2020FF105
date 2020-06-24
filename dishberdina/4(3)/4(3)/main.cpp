#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <locale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double e;
    double a, an;
    an = 2;
    int i = 1;
    cout << "введите e"<< "\n";
    cin >> e;
    cout << an;
    do
    {
        a = an;
        an = 2.+1./a;
        i++;
        cout.precision(4);
        cout << " " << an;
    } while (fabs(an - a) >= e);
    cout << endl;
    cout << "Номер элемента для которого |an-an-1|<e = " << i << "\n";
    system("pause");
}