#include <stdio.h>
int main(void)
{
	 char s[80];
	 int i;

	printf("Enter a string: ");
	scanf_s("%s", s, sizeof(s));

	for (i = 0; s[i] != '\0'; i++);

	printf("±æÀÌ´Â: %d", i);

	for (int j = 0; j <= i; j++)
		printf("%c\n", s[i - j]);

	return 0;
}