#include <stdio.h>
int main(void)
{
	int num, k = 0;

	printf("Enter a number:");
	scanf_s("%d", &num);

	if (num == 1)
			k = 0;
	else
	{
		while (num != 1)
		{
				k += 1;
				num /= 2;
		}
	}
	
	printf("%d\n", k);

	return 0;
}