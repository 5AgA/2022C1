#include <stdio.h>
int main(void)
{
	int i, num;

	printf("Enter a number: ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
		printf("%d\n", i * i * i);

	return 0;
}