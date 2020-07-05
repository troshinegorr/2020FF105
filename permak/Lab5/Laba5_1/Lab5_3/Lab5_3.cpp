#include <stdio.h>
#include <stdlib.h>

int ifpalindrome(int a)

{
	int arr[4], i, j, k, flag;
	for (i = 0; a; a /= 10, i++)
		arr[i] = a % 10;
	for (j = 0, k = i - 1, flag = 0; k >= 0; j++, k--) 
	{
		if (arr[j] != arr[k])
			flag = 1;
	}
	if (!flag)
		return 1;
	return 0;
}

int main()
{
	int i;
	for (i = 10; i < 100; i++)
		if (ifpalindrome(i * i))
			printf("%d %d\n", i, i * i);
}