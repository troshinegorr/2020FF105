#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int i, a, n;
    stringstream s;
    cin >> n;
    for (i = 9; i >= 0; i--)
    {
        a = n;
        for (; a; a /= 10)
            if (a % 10 == i)
                s << i;
    }
    s >> n;
    cout << n;
    system("pause");
    return 0;
}