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
		printf("%d���̸� A�� �޴� ����.\n", score);
	}
	else
	{
		printf(" ");
	}
	return 0;
}