#include <iostream>
using namespace std;
int main()
{
    system("chcp 1251>nul");
    char s[100];
    cout << "Введите строку: ";
    cin.getline(s, 100);
    int l = 0;
    int m = 0;
    unsigned int i = 0;
    while (i <= strlen(s))
    {
        if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9')
        {
            l++;
        }
        else
        {
            if (l > m)
            {
                m = l;
                l = 0;
            }
        }
        i++;
    }
    cout << "Длина наибольшей последовательности цифр, идущих подряд: " << m << endl;
    system("pause");
    return 0;
}

