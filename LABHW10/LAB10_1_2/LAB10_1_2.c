#include <stdio.h>
void printManyStars(char ch);
int main(void)
{
	printManyStars('*');
	printManyStars('+');
	printManyStars('1');
	return 0;
}

void printManyStars(char ch)
{
	int i, num = 5;
	for (i = 1; i <= num; i++)
		printf("%c", ch);
	printf("\n");
	return;
}