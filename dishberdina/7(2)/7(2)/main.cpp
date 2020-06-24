#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int N = 0, pov = 0, povN = 0, e = 0;
    int* Array = NULL;
    setlocale(LC_ALL, "Russian");
    cout << "введите N = ";
    cin >> N;
    Array = new int[N];
    if (Array == NULL)
    {
        return 1;
    }
    for (int i = 0; i < N; i++)
    {
        Array[i] = rand() % N;
        cout << Array[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            if (Array[i] == Array[j])
            {
                pov++;
            }
        }
        if (pov > povN)
        {
            povN = pov;
            e = Array[i];
        }
        pov = 0;
    }
    cout << "число повторов = " << povN << endl;
    cout << "элемент = " << e << endl;
    return 0;
}