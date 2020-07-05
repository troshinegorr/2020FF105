#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if ((x * x + y * y - z * z == 0) || (x * x + z * z - y * y == 0) || (y * y + z * z - x * x == 0))
    {
        cout << "yes";
    }
    else cout << "no";
}