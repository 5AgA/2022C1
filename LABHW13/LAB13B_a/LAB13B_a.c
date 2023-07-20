#include <stdio.h>
int main(void)
{
	char word[11];
	int i;
	word[10] = '\0';

	printf("Enter a word(<= 10 chars): ");
	scanf_s("%s", word, sizeof(word));
	
	printf("%s", word);
	printf("\n");

	for (i = 0; word[i] != '\0'; i++)
		printf("%c", word[i]);
	printf("\n");

	for (i = 0; word[i] != '\0'; i++)
		if (i % 2 == 0)
			printf("%c", word[i]);
	printf("\n");

	return 0;
}