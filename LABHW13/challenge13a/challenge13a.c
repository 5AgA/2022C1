#include <stdio.h>
int main(void)
{
	char word1[81], word2[81];
	int i, isDiff = 0;

	printf("Enter the first word: ");
	scanf_s("%s", word1, sizeof(word1));
	printf("Enter the second word: ");
	scanf_s("%s", word2, sizeof(word2));

	for (i = 0; word1[i] != '\0' || word2[i] != '\0'; i++)
	{
		if (word1[i] != word2[i])
		{
			isDiff = 1;
			break;
		}
	}
	
	if (isDiff == 1)
		printf("두 단어는 다르다\n");
	else if (isDiff == 0)
		printf("두 단어는 같다\n");
}