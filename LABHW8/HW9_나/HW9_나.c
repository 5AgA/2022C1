#include <stdio.h>
int main(void)
{
	int i, j, s = 0;

	for (i = 1; i <= 6; i++)
	{
		for (j = i * 5 - 4; j <= (i * 5); j++)
			s += j;
		printf("%d - %d ±îÁö ÇÕ = %d\n", i * 5 - 4, j - 1, s);
		s = 0;
	}

	return 0;
}