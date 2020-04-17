#include <iostream>
#include <math.h>

using namespace std;

    int sum(int N) 
    {
        int s;
        s = 1;
        for (int i = 2; i * i <= N; ++i) 
        {
            if (N % i == 0) {
                s += i;
                if (i * i < N)
                    s += N / i;
            }
        }
        return s;
    }
    int main()
    {
        setlocale(LC_ALL, "ru");
        int s, N;
        cout << "Введите число N ";
        cin >> N;
        for (int i = 1; i < N; ++i) {
            s = sum(i);
            if (s > i && i == sum(s)) {
                cout << i << " - " << s << endl;
            }           
        }
       return 0;
    }