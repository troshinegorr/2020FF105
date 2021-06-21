#include <iostream>
using namespace std;
int min_element_int(int, int);
int max_element_int(int, int);
int main() {
	cout << "Result = " << max_element_int(min_element_int(9, 10), min_element_int(5, 8));
	cin.get(); cin.get();
	return 0;
}
int min_element_int(int _a, int _b) { return _a < _b ? _a : _b; }
int max_element_int(int _a, int _b) { return _a > _b ? _a : _b; }