#include <stdio.h>
int main(void)
{
	int scores[40], num;
	int total = 0, average;

	printf("Enter the number of scores(0 < number <= 40): ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("Enter a score: ");
		scanf_s("%d", &scores[i]);
	}
	for (int i = 0; i < num; i++)
		total += scores[i];
	average = total / num;
	printf("----------------------------------------\n");


	printf("Total : %d\nAverage : %d\n", total, average);
	
	for (int j = 0; j < num; j++)
		printf("%d ", scores[j]);
	printf("\n");

	return 0;
}