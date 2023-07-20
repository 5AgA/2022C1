#include <stdio.h>
int main(void)
{
	int i, j, row, col;

	printf("Enter the number of rows: ");
	scanf_s("%d", &row);
	printf("Enter the number of columns: ");
	scanf_s("%d", &col);

	i = 1;
	j = 1;

	while (i <= row)
	{
		while (j <= col)
		{
			printf("*");
			j++;
		}
		j = 1;
		printf("\n");
		i++;
	}

	return 0;
}