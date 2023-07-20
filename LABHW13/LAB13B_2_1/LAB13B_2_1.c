#include <stdio.h>
int main(void)
{
	char str[30];

	printf("Enter one word: ");
	scanf_s("%s", str, sizeof(str));

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
			printf("%c\n", str[i]);
	}

	return 0;
}