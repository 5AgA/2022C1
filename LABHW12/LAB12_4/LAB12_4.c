#include <stdio.h>
int main(void)
{
	int data[20], n;

	printf("Enter a number: ");
	scanf_s("%d", &n);

	for (int i = 0; i < 20; i++)
		data[i] = n * (i + 1);
	
	for (int j = 0; j < 20; j++)
	{
		printf("  %5d", data[j]);

		if (j % 5 == 4)
			printf("\n");
	}

	return 0;
}