#include <stdio.h>
void findNPrintBiggest(int a, int b, int c);

int main(void)
{
	int num1, num2, num3;

	printf("Enter three numbers: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	findNPrintBiggest(num1, num2, num3);

	return 0;
}

void findNPrintBiggest(int a, int b, int c)
{
	int i, big;

	if (a >= b && a >= c)
		big = a;
	else if (b >= a && b >= c)
		big = b;
	else
		big = c;

	printf("The Biggest number is %d.\n", big);

	return;
}