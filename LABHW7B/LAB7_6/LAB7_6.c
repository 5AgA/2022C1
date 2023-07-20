#include <stdio.h>
int main(void)
{
	int total = 0, score = 0, num = 0, i = 1;

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
	
	printf("The total is %d\n", total);

	return 0;
}