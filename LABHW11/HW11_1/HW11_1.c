#include <stdio.h>
int sumMToN(int m, int n);

int main(void)
{
	printf("%d 부터 %d 까지의 합은 %d\n", 2, 5, sumMToN(2, 5));
	printf("%d 부터 %d 까지의 합은 %d\n", 3, 7, sumMToN(3, 7));
	printf("%d 부터 %d 까지의 합은 %d\n", 2, 10, sumMToN(2, 10));
}

int sumMToN(int m, int n)
{
	int sum = 0;

	for (; m <= n; m++)
		sum += m;
	return sum;
}