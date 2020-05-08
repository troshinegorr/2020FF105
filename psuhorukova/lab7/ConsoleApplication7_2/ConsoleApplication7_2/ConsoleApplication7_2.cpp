#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int N;
    cout << "Введите число опрошенных: ";
    cin >> N;
    cout << "Введите ответы на вопрос: "<<endl;
    cout << "Какое животное вы связываете с Японией и японцами?"<<endl;
    cout << "полученные в результате опроса " << N << " слушателей"<<endl;
    string *a = new string[N];
    for (int i = 0; i < N; i++)
    {
        cout << "ответ " << i << "-";
        cin >> a[i];
    }
    int i = 0;
    int m = 0;
    int p = 1;
    while (i < N)
    {
        int k = 1;
        for (int j=i+1;j<N;j++)
            if (a[j]==a[i])
            {
                k = k + 1;
            }
        if (k > m) {
            m = k;
            p = i;
        }
        i = i + 1;
    }
    int t = m * 100 / N;
    cout << "Наиболее частый ответ: " << a[p] << " " << t << "%" << endl;
    delete [] a;
    cin.get(); cin.get();
    return 0;
}