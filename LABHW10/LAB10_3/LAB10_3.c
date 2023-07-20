#include <stdio.h>
int main(void)
{
	int ts, ms, i;

	printf("Tom's score? ");
	scanf_s("%d", &ts);
	printf("Mary's score? ");
	scanf_s("%d", &ms);

	printf("---------- Score Histogram ----------\n");
	printf("Tom		:");
	for (i = 1; i <= ts; i++)
		printf("*");
	if (ts < 10)
		printf("<0%d>\n", ts);
	else
		printf("<%d>\n", ts);
	printf("Mary		:");
	for (i = 1; i <= ms; i++)
		printf("*");
	if (ms < 10)
		printf("<0%d>\n", ms);
	else
		printf("<%d>\n", ms);
}