#include <stdio.h>
int main(void)
{
	char word[81] = {0}, newWord[81] = {0};
	int i, j = 0;

	printf("Enter one word: ");
	scanf_s("%s", word, sizeof(word));


	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= 65 && word[i] <= 90)
		{
			newWord[j] = word[i];
			j++;
		}
	}

	printf("%s\n", newWord);

	return 0;
}