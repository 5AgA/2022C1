/*****************************************************************
HW3_1 오은아 20220783 컴퓨터학과 1학년
******************************************************************/
#include <stdio.h>
int main(void)
{
	int score1, score2, average;

	printf("Enter two scores: ");
	scanf_s("%d %d", &score1, &score2);

	average = (score1 + score2) / 2;

	printf("The average is %d.\n", average);

	return 0;
}