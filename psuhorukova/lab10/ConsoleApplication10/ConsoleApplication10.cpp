#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    int k;
    cout << "k = ";
    cin >> k;
    char stroka[30] = "";
    cout << "n = ";
    cin >> stroka;
    int v;
    v = strlen(stroka);
    int a[50] = { 0 };
    int b[50] = { 0 };
    for (int i = 0; i < v ; i++)
    {
        a[i] = atoi(&stroka[v-1-i]);
        stroka[v - 1 - i] = '\0';
    }
    for (int i = 0; i < v; i++)
    {
        b[i] = a[i];
    }
    int t;
    t = v;
    a[0] = a[0] + 1;
    if (a[0] == 10)
    {
        for (int j = 0; j < v; j++)
        {
            a[j + 1] = a[j + 1] + a[j] / 10;
            a[j] = a[j] % 10;
        }
    }
    for (int i = 49; i >= 0; i--)
    {
        if (a[i] != 0)
        {
            v = i + 1;
            break;
        }
    }
    for (int i = 0; i < v; i++)
    {
        b[i] = b[i] * k;
    }
    for (int i = 0; i < 49; i++)
    {
        b[i + 1] = b[i + 1] + b[i] / 10;
        b[i] = b[i] % 10;    
    }
    for (int i = 49; i >= 0; i--)
    {
        if (b[i] != 0)
        {
            t = i+1;
            break;
        }
    }
    int d;
    d = v + t;
    int* c = new int[d];
    for (int i = 0; i < d; i++)
    {
        c[i] = 0;
    }
    for (int i = 0; i < (v+1); i++)
    {
        for (int j = 0; j < (t+1); j++)
        {
            c[i + j] = c[i + j] + a[i] * b[j];
        }
    }
    for (int i = 0; i < d; i++)
    {
        if (i > 0)
        {
            c[i] = c[i] + c[i - 1] / 10;
            c[i - 1] = c[i - 1] % 10;
        }
    }
     for (int i = d - 1; i >= 0; i--)
    {
        if (c[i] == 0)
            d--;
        else break;
    }
    for (int i = d - 1; i >= 0; i--)
    {
        if (i > 0)
        {
            c[i - 1] =  c[i - 1] + c[i] % 2 *10;
            c[i] = c[i] / 2; 
        }
        else {
            c[i] = c[i] / 2;
        }
    }
    cout << "Summ of: ";
    for(int i=d-1;i>=0;i--)
    {
        cout << c[i];
    }
    delete[]c;
    cin.get(); cin.get();
    return 0;
}

