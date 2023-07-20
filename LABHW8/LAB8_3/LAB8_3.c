#include <stdio.h>
int main(void)
{
	int num = 0, i, integer = 0, even = 0;

	printf("Enter the # of integers: ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		printf("Enter an integer: ");
		scanf_s("%d", &integer);

		if (integer % 2 == 0)
			even += 1;
	}

	printf("The number of even numbers is %d.\n", even);

	return 0;
}