#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
	char str[256];
	int cnt = 0, cnt1 = 0;
	printf("Enter string -> ");
	cin >> str;
	printf("\nSymbols -> ");
	for (int i = 0; i < strlen(str); i++)
	{
		cnt1 = 0;
		for (int j = 0; j < strlen(str); j++)
		{
			if (str[i] == str[j])
			{
				cnt1++;
			}
		}
		if (cnt1 == 1)
		{
			printf("%c ", str[i]);
			cnt++;
		}
	}
	printf("\nNumber symbol -> %d", cnt);
	return 0;
}