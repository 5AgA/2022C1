#include <stdio.h>
int main(void)
{
	int num = 0, i, fac;

	printf("Enter a number (>=2): ");
	scanf_s("%d", &num);
	printf("%d! = %d", num, num);

	fac = num;

	for (i = (num-1); i >= 1; i--)
	{
		fac *= i;
		printf(" * %d", i);
	}
	
	printf(" = %d\n", fac);

	return 0;
}