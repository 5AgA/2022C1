#include <stdio.h>
int main(void)
{
	int incomes[7], total = 0, best, bestIndex;
	float avg;

	for (int i = 0; i < 7; i++)
	{
		printf("Enter the income of day %d: ", i + 1);
		scanf_s("%d", &incomes[i]);
	}
	best = incomes[0];
	printf("-------------------------------\n");
	for (int j = 0; j < 7; j++)
	{
		if (incomes[j] > best)
		{
			best = incomes[j];
			bestIndex = j + 1;
		}
	}
	for (int k = 0; k < 7; k++)
		total += incomes[k];
	avg = (float)total / 7;
	printf("The best income: %d in day %d\n", best, bestIndex);
	printf("-------------------------------\n");
	printf("The total is %d\n", total);
	printf("The average is %.1f\n", avg);
	printf("The good days and their incomes are\n");
	for (int l = 0; l < 7; l++)
	{
		if (incomes[l] > avg)
			printf("day %d: %d\n", l + 1, incomes[l]);
	}

	return 0;
}