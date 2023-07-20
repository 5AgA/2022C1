#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isHiddenPasswd(char passwd[], char input[]);

int isHiddenPasswd(char passwd[], char input[])
{
	int i, j = 0, lngth;

	for (lngth = 0; passwd[lngth] != '\0'; lngth++);

	for (i = 0; input[i] != '\0'; i++)
	{
		if (input[i] == passwd[j])
			j++;
	}
	if (j == lngth)
		return 1;
	else
		return 0;
}
int main(void)
{
	char passwd[20], input[20];
	int i;

	scanf("%s", passwd);
	for (i = 0; i < 3; i++)
	{
		scanf("%s", input);
		if (isHiddenPasswd(passwd, input))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}