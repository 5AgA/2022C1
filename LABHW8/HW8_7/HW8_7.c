#include <stdio.h>
int main(void)
{
	int num, i;

	printf("Enter a number: ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
			printf("%d ", i);
	}
	
	printf("\n");

	return 0;
}