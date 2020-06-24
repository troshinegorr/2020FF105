#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int a = i;
        int b = i;
        if (i % 10 == 0)
            continue;
        while (b != 0)
        {
            if ((a % (b % 10)) == 0)
            {
                b = b / 10;
            }
            else
                break;
        }
        if (b == 0)
            cout << a << endl;
    }
    return 0;
}