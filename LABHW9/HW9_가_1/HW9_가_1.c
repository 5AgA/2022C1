#include <stdio.h>
int main(void)
{
	int num, i, j, k;

	printf("Enter a number: ");
	scanf_s("%d", &num);

	for (k = num; k > 0; k--)
	{
		for (j = 1; j <= num - k; j++)
			printf(" ");
		for (i = 1; i <= k; i++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}