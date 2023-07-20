#include <stdio.h>
int main(void)
{
	int i, j;

	for (i = 1; i <= 9; i++)
	{
		for (j = 2; j <= 8; j += 2)
			printf("%d * %d = %d\t", i, j, i * j);
		printf("\n");
	}

	return 0;
}