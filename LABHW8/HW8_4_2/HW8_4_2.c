#include <stdio.h>
int main(void)
{
	int i = 1, j =2;

	while (i <= 9)
	{
		while (j <= 8)
		{
			printf("%d * %d = %d\t", i, j, i * j);
			j += 2;
		}
		j = 2;
		printf("\n");
		i++;
	}

	return 0;
}