#include <stdio.h>
int main(void)
{
	char word[81], newWord[81];
	int cnt, i;

	printf("Enter one word: ");
	scanf_s("%s", word, sizeof(word));

	for (cnt = 0; word[cnt] != '\0'; cnt++);

	for (i = 0; i < cnt; i++)
	{
		newWord[i] = word[cnt - 1 - i];
	}
	newWord[i] = '\0';

	printf("The reversed word is %s\n", newWord);

	return 0;
}