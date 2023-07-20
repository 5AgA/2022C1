#include <stdio.h>
int main(void)
{
	int num, count = 0;

	printf("");
	scanf_s("%d", &num);

	while (num >= 10)
	{
		num /= 10;
		count += 1;
	}

	printf("%d\n", count + 1);

	return 0;
}