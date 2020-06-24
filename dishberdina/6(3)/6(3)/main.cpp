#include <iostream>
#include <cmath>
using namespace std;
void func(int N);
int main()
{
    int n;
    setlocale(LC_ALL, "Russian");
    cout << "введите число"<<endl;
    cin >> n;
    func(n);
    return 0;
}
void func(int N)
{
    bool b = false;
    if (N > 1)
        for (int i = 2; i < N; i++) if (N % i == 0) b = true;
    b ?cout << "false" << endl : cout << "true" << endl;
    system("pause");
}