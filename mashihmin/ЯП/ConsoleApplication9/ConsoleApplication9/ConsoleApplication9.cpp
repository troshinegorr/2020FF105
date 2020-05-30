// ConsoleApplication9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

int chet(string s, int ch, char c)
{
	int b = s.size();
	for (int i = 0; i < b; i++)
	{
		if (s[i]==c)
		{
			ch += 1;
		}
	}
	return (ch);
}

int main()
{
	setlocale(LC_ALL, "ru");
	int a, b, c, ch = 0;
	string s;
	char s1 = '*', s2 = ';', s3 = ':';
	cout << "Введите текст" << endl;
	cin >> s;
	a = chet(s, 0, s1);
	b = chet(s, 0, s2);
	c = chet(s, 0, s3);
	ch = a + b + c;
	cout << "Ответ: " << ch << endl;
}
