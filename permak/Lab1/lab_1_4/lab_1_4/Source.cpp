#include <iostream>
using namespace std;

int main() {
    double x, y, l;
    double x1 = 0, y1 = 0, r = 6; 
    double xz = 2; 
    cout << "¬ведите x,y";
    cin >> x >> y;
    l = (x - x1) * (x - x1) + (y - y1) * (y - y1);
    if (x >= xz && r * r >= l) cout << "true"; 
    else cout << "false";
    return 0;
}