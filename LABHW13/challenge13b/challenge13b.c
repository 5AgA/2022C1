#include <stdio.h>
int main(void)
{
	char word[81];
	int sum = 0, num = 0;

	printf("Enter a word: ");
	scanf_s("%s", word, sizeof(word));

	for (int i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= 48 && word[i] <= 57)
			num = 10 * num + word[i] - 48;
		else
		{
			sum += num;
			num = 0;
		}
	}
	sum += num;

	printf("글자 안의 수의 합은 %d\n", sum);
}