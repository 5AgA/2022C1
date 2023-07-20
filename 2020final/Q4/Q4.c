#include <stdio.h>
int is_in(char w[], char ch);
int is_in(char w[], char ch)
{
	for (int i = 0; w[i] != '\0'; i++)
	{
		if (w[i] == ch)
			return 1;
	}
	return 0;
}
int main(void)
{
	char word[20];

	scanf_s("%s", word, sizeof(word));

	for (int i = 'A'; i <= 'Z'; i++)
	{
		if (is_in(word, i) == 0)
			printf("%c", i);
	}
}