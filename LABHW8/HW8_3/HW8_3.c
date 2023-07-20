#include <stdio.h>
int main(void)
{
	int i, j, row, col;

	printf("Enter the number of rows: ");
	scanf_s("%d", &row);
	printf("Enter the number of columns: ");
	scanf_s("%d", &col);

	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
			printf("%d", i);
		printf("\n");
	}

	return 0;
}