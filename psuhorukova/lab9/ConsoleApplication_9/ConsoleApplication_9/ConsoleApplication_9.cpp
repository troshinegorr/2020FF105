#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string slovo;
    cout << "Введите слово: ";
    cin >> slovo;
    int a;
    a = slovo.length();
    int b = 0;
    for (int i = 0; i < a/2; i++)
    {
        if (slovo[i]!=slovo[a-1-i])
            {
             b=b+1;
            }
    }
    if (b==0)
    {
        cout << "Слово - палиндром" << endl;
    }
    else {
       cout << "Слово не палиндром" << endl;
    }
    
    cin.get(); cin.get();
    return 0;
}



