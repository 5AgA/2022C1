#include <stdio.h>
void print_divisor(int num);

int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf_s("%d", &n);

	print_divisor(n);

	return 0;
}

void print_divisor(int num)
{
	int i;

	for (i = 1; i <= num; i++)
	{ 
		if (num % i == 0)
			printf("%d\n", i);
	}
}