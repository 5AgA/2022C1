#include <stdio.h>
int main(void)
{
	int m, n, s = 0, i, j, p = 1;

	scanf_s("%d %d", &m, &n);

	for (i = m; i <= n; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				p = 0;
		}

		j = 2;
		if (p == 1)
			s += i;
		p = 1;
	}

	printf("%d\n", s);
		
	return 0;
}