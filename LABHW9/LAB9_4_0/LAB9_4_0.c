#include <stdio.h>
int main(void)
{
	int num;

	do
	{
		printf("Enter a number(양수):");
		scanf_s("%d", &num);
		
	} while (num < 1 );

	printf("입력된 양수는 %d\n", num);

	return 0;
}