#include <stdio.h>
int main(void)
{
	int i, num;

	printf("Enter a number: ");
	scanf_s("%d", &num);

	for (i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", num, i, num * i);

	return 0;
}