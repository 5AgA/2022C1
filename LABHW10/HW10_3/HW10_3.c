#include <stdio.h>
void printManyStars(int starNum);

int main(void)
{
	int ts, ms;

	printf("Tom's score? ");
	scanf_s("%d", &ts);
	printf("Mary's score? ");
	scanf_s("%d", &ms);

	printf("---------- Score Histogram ----------\n");
	printf("Tom		:");
	printManyStars(ts);
	if (ts < 10)
		printf("<0%d>\n", ts);
	else
		printf("<%d>\n", ts);
	printf("Mary		:");
	printManyStars(ms);
	if (ms < 10)
		printf("<0%d>\n", ms);
	else
		printf("<%d>\n", ms);
}

void printManyStars(int starNum)
{
	int i;

	for (i = 1; i <= starNum; i++)
		printf("*");

	return;
}