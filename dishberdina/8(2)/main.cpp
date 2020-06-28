#include <iostream>
#include <iomanip>
using namespace std;
const int N = 5;
void get_random(int** a)
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            a[i][j] = i * (N + 1) + j + 1;
}
void print_matrix(int** a)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << setw(4) << a[i][j] << " ";
        cout << endl;
    }
    cout <<endl;
}

void exchange(int** a)
{
    int max = INT_MIN, imax, jmax;
    for (int i = 0; i < N; i++)
    {
        if (a[i][i] > max)
        {
            max = a[i][i];
            imax = i;
            jmax = i;
        }
        if (a[i][N - i - 1] > max)
        {
            max = a[i][N - i - 1];
            imax = i;
            jmax = N - i - 1;
        }
    }
    swap(a[N / 2][N / 2], a[imax][jmax]);
}
int main()
{
    int** matr = new int* [N];
    for (int index = 0; index < N; index++)
        matr[index] = new int[N];
    get_random(matr);
    print_matrix(matr);
    exchange(matr);
    print_matrix(matr);
    return 0;
}