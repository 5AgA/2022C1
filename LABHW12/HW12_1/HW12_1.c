#include <stdio.h>
int main(void)
{
	int scores[20], n;

	printf("Enter the number of scores(<= 20): ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("Enter a score: ");
		scanf_s("%d", &scores[i]);
	}
	for (int j = 0; j < n; j++)
	{
		printf("Student%5d: ", j + 1);
		for (int k = 1; k <= scores[j]; k++)
			printf("*");
		printf("\n");
	}

	return 0;
}