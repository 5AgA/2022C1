#include <stdio.h>
void printSumMToN(int M, int N);

int main(void)
{
	int m, n;

	printf("Enter two numbers : ");
	scanf_s("%d %d", &m, &n);

	printSumMToN(m, n);

	return 0;
}

void printSumMToN(int M, int N)
{
	int i, s = 0;

	for (i = M; i <= N; i++)
		s += i;

	printf("%d~ %dÀÇ ÇÕ: %d\n", M, N, s);

	return;
}