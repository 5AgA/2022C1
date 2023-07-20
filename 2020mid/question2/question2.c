#include <stdio.h>
int main(void)
{
	int n, i, s = 0;

	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			s += i;
	}

	printf("%d\n", s);

	return 0;
}