#include "iostream"
#include "cmath"
using namespace std;
bool F(int a, int b)
{
    a = abs(a); b = abs(b);
    if (a == 1 || b == 1)
        return true;
    if (a == b)
        return false;
    for (int j = 2; j < ((a > b) ? a : b); j++)
    {
        if ((!(b % j)) && (!(a % j)))
            return false;
    }
    return true;
}
int main()
{
    int p, q;
    cout << "\n p: ";    cin >> p;
    cout << " q: ";    cin >> q;
    cout << "res: ";
    for (int i = 2; i < q; i++)
    {
        if (!(q % i))      
            if (F(q / i, p))
                cout << "  " << q / i << endl;
    }
    cout << endl;
    system("PAUSE");
    return 0;
} 