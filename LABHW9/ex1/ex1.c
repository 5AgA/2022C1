#include <stdio.h>
int main(void)
{
	int num;

	printf("Enter a number: ");
	scanf_s("%d", &num);

	while (num != 0)
	{
		printf("%d", num % 10);
		num /= 10;
	}
	printf("\n");

	return 0;
}