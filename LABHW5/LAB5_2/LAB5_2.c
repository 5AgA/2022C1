#include <stdio.h>
int main(void)
{
	char ch;
	int value;

	printf("Enter an alphet: ");
	scanf_s("%c", &ch, 1);
	printf("%c %d\n", ch, ch);
	printf("Enter an ascii value: ");
	scanf_s("%d", &value);
	printf("%d %c\n", value, value);

	return 0;
}