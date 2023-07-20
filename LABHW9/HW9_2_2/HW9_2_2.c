#include <stdio.h>
int main(void)
{
	int score, total = 0, n = 0, best = 0;
	double average;

	while (1)
	{
		printf("Enter a score(-1 for exit): ");
		scanf_s("%d", &score);

		if (score == -1)
			break;

		n += 1;
		total += score;

		if (score >= best)
			best = score;
	}

	average = (double)total / n;

	if (n == 0)
		printf("You've entered 0 students.\nThere is no data.\n");
	else
		printf("You've entered %d students.\nThe total is %d.\nThe average is %.1f.\nThe best score is %d.\n", n, total, average, best);

	return 0;
}