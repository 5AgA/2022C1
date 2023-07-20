#include <stdio.h>
int scoreReading(void);
char gradeDecision(int s1);
int main(void)
{
	int score1, score2, m;

	score1 = scoreReading();
	score2 = scoreReading();
	m = (score1 + score2) / 2;

	printf("Grade is %c!\n", gradeDecision(m));
}

int scoreReading(void)
{
	int s;
	printf("Enter a score: ");
	scanf_s("%d", &s);

	return s;
}

char gradeDecision(int s1)
{
	if (s1 >= 80)
		return 'A';
	else if (s1 >= 50)
		return 'B';
	else
		return 'F';
}