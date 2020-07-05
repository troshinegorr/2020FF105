#include <math.h>
#include <conio.h>
#include <stdio.h>

int main()
{
	float a = 0;
	for (int i = 1; i <= 10; i++)
	{
		if ((i % 2) == 1)
			a = a + 1.0 - (sin((double)i / 10.0));
		else
			a = a + 1.0 + (sin((double)i / 10.0));
	}
	printf("Result: %f", a);
	return 0;
}