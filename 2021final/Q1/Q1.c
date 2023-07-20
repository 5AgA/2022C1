#include <stdio.h>
int isPrime(int num);
int isPrime(int num)   //소수면 1 아니면 0
{
	for (int i = 2; i < num; i++)
		if (num % i == 0)
			return 0;
	return 1;
}
int main(void)
{
	int n, i, sum = 0;

	do
	{
		scanf_s("%d", &n);
		if (n == -1)
			break;
		if (isPrime(n))
			sum += n;
	} while (n != -1);
	printf("%d\n", sum);
}