#include <stdio.h>
int is_prime(int num);
int main(void)
{
	int a[20], p[20], np[20], m = 0, n = 0;
	int i, num;

	scanf_s("%d", &num);
	for (i = 0; i < num; i++)
		scanf_s("%d", &a[i]);

	for (int j = 0; j < num; j++)
	{
		if (is_prime(a[j]) == 0)
		{
			np[n++] = a[j];
		}
		else if (is_prime(a[j]) == 1)
		{
			p[m++] = a[j];
		}
	}
	np[n] = '\0';
	p[m] = '\0';

	for (int k = 0; p[k] != '\0'; k++)
		printf("%d ", p[k]);
	for (int k = 0; np[k] != '\0'; k++)
		printf("%d ", np[k]);
}
int is_prime(int num)
{
	int i;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;
}