#include <iostream>

#include <string>

using namespace std;

int main()

{

	string s, r;

	char c;

	s = "apple apple apple";

	for (int i = 0; (c = s[i]) != '\0'; i++) {

		if (c == ' ')

			r += ',';

		r += c;

	}

	cout << '[' << s << ']' << endl;

	cout << '[' << r << ']' << endl;

	return 0;

}
