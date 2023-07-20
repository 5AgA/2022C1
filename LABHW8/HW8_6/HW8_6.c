#include <stdio.h>
int main(void)
{
	int i, j, n;
	long long f = 1;

	printf("Enter a number: ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			f *= j;
		}
		printf("%d! = %lld\n", i, f);
		f = 1;
	}

	return 0;
}