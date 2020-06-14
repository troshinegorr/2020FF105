#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int res = 0;
	string str;
	cout << "Введите строку: ";
	getline(cin, str);
	for (int i = 0; str[i] != ':'; i++) {
		res++;
	}
	cout << "Число символов перед двоеточием: " << res;
}