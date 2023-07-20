#include <stdio.h>
int main(void)
{
	int i = 1, num=0;

	printf("Enter a number: ");
	scanf_s("%d", &num);

	while (i <= num)
	{
		printf("%d\n", i * i * i);
		i++;
	}
	return 0;
}