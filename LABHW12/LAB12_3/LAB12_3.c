#include <stdio.h>
int main(void)
{
	int income[7], best;

	for (int i = 0; i < 7; i++)
	{
		printf("Enter the income: ");
		scanf_s("%d", &income[i]);
	}
	best = income[0];
	for (int k = 0; k < 7; k++)
	{
		if (income[k] > best)
			best = income[k];
	}
	
	printf("----------------------------------------\n");
	printf("The best income is %d\nIncomes are\n", best);
	for (int j = 0; j < 7; j++)
	{
		printf("%d ", income[j]);
	}
	printf("\n");

	return 0;
}