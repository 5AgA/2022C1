#include <stdio.h>
int main(void)
{
	int num;

	do
	{
		printf("Enter a number(���):");
		scanf_s("%d", &num);
		
	} while (num < 1 );

	printf("�Էµ� ����� %d\n", num);

	return 0;
}