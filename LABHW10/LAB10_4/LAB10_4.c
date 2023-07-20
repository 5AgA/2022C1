#include <stdio.h>
void printSum1ToN(int a);
int main(void)
{
	int n;

	printf("Enter a number : ");
	scanf_s("%d", &n);

	printSum1ToN(n);

	return 0;
}
void printSum1ToN(int a)
{
	int i, sum = 0;

	for (i = 1; i <= a; i++)
		sum += i;
	printf("1 ~ %dÀÇ ÇÕ: %d\n", a, sum);

	return;
}