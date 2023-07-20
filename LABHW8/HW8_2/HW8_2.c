#include <stdio.h>
int main(void)
{
	int i, score = 0, best = -1, worst = 9999999, num = 0;

	printf("Enter the number of scores: ");
	scanf_s("%d", &num);

	if (num > 0)
	{
		for (i = 1; i <= num; i++)
		{
			printf("Enter a score: ");
			scanf_s("%d", &score);

			if (score >= best)
				best = score;
			if (score <= worst)
				worst = score;
		}

		printf("The best score is %d\n", best);
		printf("The worst score is %d\n", worst);
	}
	else if (num <= 0)
		printf("no data.\n");

	return 0;
}