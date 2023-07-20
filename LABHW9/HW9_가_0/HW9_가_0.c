#include <stdio.h>
int main(void)
{
	int num, i;

	printf("Enter a number: ");
	scanf_s("%d", &num);

	for (; num > 0; num--)
	{
		for (i = 1; i <= num; i++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}