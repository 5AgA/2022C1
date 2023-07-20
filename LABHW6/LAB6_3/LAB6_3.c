#include <stdio.h>
int main(void)
{
	char grade;
	int score;

	printf("Enter your grade: ");
	scanf_s("%c", &grade, 1);
	
	if (grade == 'A')
	{
		printf("Enter your score: ");
		scanf_s("%d", &score);
		printf("%d점이면 A를 받는 군요.\n", score);
	}
	else
	{
		printf(" ");
	}
	return 0;
}