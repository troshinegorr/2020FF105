#include <stdio.h>

#include <ctype.h>

int main(void)

{

	char str[] = "The progkram is for search, edit, and recover disk data. File groups and \
folders recovery is supporkted in kthe Fkull Ediktion.";

		int i, j;

	int beg = 0; // начало слова

	int cout = 0; // счетчик буквы k

	i = 0;

	while (str[i] != '\0') // пока не достигнут конец строки

	{

		if (isalpha(str[i])) // является ли символ буквой

		{

			if (str[i] == 'k')

				cout++;

			i++;

		}

		else

		{

			if (cout > 0)

			{

				for (j = beg; j < i; j++)

					printf("%c", str[j]);

				printf("\n");

				cout = 0;

			}

			i++;

			beg = i;

		}

	}

	return 0;

}