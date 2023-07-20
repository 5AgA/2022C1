#include <stdio.h>
long long twoToThePower(int n);
int isPrime(long long x);
long long twoToThePower(int n)
{
	long long power = 1;

	for (int j = 1; j <= n; j++)
		power *= 2;

	return power;
}

int isPrime(long long x)
{
	for (long long i = 2; i < x; i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}

int main(void)
{
	long long num, pow;

	printf("Enter a number: ");
	scanf_s("%lld", &num);

	for (long long i = 2; i <= num; i++)
	{
		pow = twoToThePower(i) - 1;

		if (isPrime(pow) == 1)
			printf("(2 ^ %lld - 1) = %lld은 메르센 소수이다\n", i, pow);
	}
	
	return 0;
}