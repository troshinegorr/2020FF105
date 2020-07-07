#include <iostream>

#include <string>

using namespace std;

int main()

{

	int k = 0;

	string str;

	cout << "Input string " << endl;

	cin >> str;

	cout << "string is " << str << endl;

	for (unsigned i = 0; i = str.find(":", i), i != std::string::npos;)

	{

		str.replace(i, 1, ";");

		i++;

		k++;

	}

	cout << "string is " << str << endl;

	cout << "replacements' " << k << endl;

	return 0;

}