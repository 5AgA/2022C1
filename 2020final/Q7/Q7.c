#include <stdio.h>
int isHiddenPassword(char input[]);
int isHiddenPassword(char input[])
{
	int i;

	for (i = 0; input[i] != '\0'; i++)
	{
		if (input[i] == 'a' && input[i + 1] == 'p'
			&& input[i + 2] == 'p' && input[i + 3] == 'l'
			&& input[i + 4] == 'e')
			return 1;
		return 0;
	}
}
int main(void)
{
	char check[3], input[20];
	int i;

	for (i = 0; i < 3; i++)
	{
		scanf_s("%s", input, sizeof(input));
		if (isHiddenPassword(input))
			check[i] = '1';
		else
			check[i] = '0';
	}
	
	for (int j = 0; j < 3; j++)
		printf("%c", check[j]);
	printf("\n");
}