#include <stdio.h>
int main(void)
{
	int i, num, prime = 1;

	printf("Enter a number: ");
	scanf_s("%d", &num);

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			prime = 0;
	}

	if (prime == 0)
		printf("�Ҽ��� �ƴϴ�\n");
	else
		printf("�Ҽ��̴�\n");

	return 0;
}