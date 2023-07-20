#include <stdio.h>
int main(void)
{
	int h, w;
	char ch;

	do
	{
		printf("Enter your height: ");
		scanf_s("%d", &h);
		
		w = h - 110;

		printf("Your ideal weight is %d.\n", w);

		while (getchar() != '\n');

		printf("Do you want to continue(y/n)? ");
		scanf_s("%c", &ch, 1);
	} while (ch == 'y');

	return 0;
}