#include<iostream>
#include <math.h>
using namespace std;
int main() {
    double x;
    int n;
    double** array;
    setlocale(0, "rus");
    cout << "¬ведите х ";
    cin >> x;
    cout << "введите n ";
    cin >> n;
    array = new double* [n + 1];
    for (int i = 0; i < n + 1; ++i) {
        array[i] = new double[n + 1];
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            array[i][j] = 0.0;
        }
    }
    for (int i = 0; i < n + 1; ++i) {
        double res = pow(x, i);
        array[0][i] = res;     
        array[n][n - i] = res;    
        array[i][0] = res;      
        array[n - i][n] = res;    
    }
    for (int i = 0; i < n + 1; ++i) {
        for (int j = 0; j < n + 1; ++j) {
            cout.width(5);
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n + 1; ++i) {
        delete array[i];
    }
    delete array;
    return 0;
}
