#include <stdio.h>
int main(void)
{
	int num = 0, i, factorial = 1;

	printf("Enter a number: ");
	scanf_s("%d", &num);

	i = num;

	while (i > 0)
	{
		factorial *= i;
		i--;
	}

	printf("%d �� Factorial ���� %d �̴�.\n", num, factorial);

	return 0;
}