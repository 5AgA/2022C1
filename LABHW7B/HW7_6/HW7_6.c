#include <stdio.h>
int main(void)
{
	int i, number;
	int ones = 0;

	printf("Enter a number : ");
	scanf_s("%d", &number);

	i = 1;
	while (i <= number)
	{
		ones = 1 + ones * 10;

		printf("%d\n", ones);

		i++;
	}

	return 0;
}