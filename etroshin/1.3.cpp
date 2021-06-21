#include <iostream>

using namespace std;

int main()
{
    int m, k;
    cin >> m >> k;

    if ((m >= 10) && (m < 100) && (m % k == 0))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    system("pause");
}
