#include <stdio.h>
int main(void)
{
	int  score = 0, num = 0, i = 1, total = 0;
	float average = 0;

	printf("Enter a student number: ");
	scanf_s("%d", &num);

	while (i <= num)
	{
		printf("Enter a score: ");
		scanf_s("%d", &score);

		total += score;
		score = 0;
		i++;
	}

	average = (double)total / num;

	if (num == 0)
		average = 0;

	printf("The total is %d\nThe average is %.1f\n", total, average);

	return 0;
}