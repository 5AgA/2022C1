#include <stdio.h>
int main(void)
{
	int num = 0, i = 1, sum = 0, multi = 1;

	printf("Enter a number: ");
	scanf_s("%d", &num);

	while (i <= num)
	{
		sum = sum + 3;
		multi = multi * 3;
		i++;
	}
	
	printf("3 �� %d �� ���� ���� %d �̴�.\n3 �� %d �� ���� ���� %d �̴�.\n", num, sum, num, multi);

	return 0;
}