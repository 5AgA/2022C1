#include <stdio.h>
int main(void)
{
	int i;
	char ch;
	char str[10] = "12345678";

	printf("--변경 전 문자열--\n");
	printf("%s \n", str);

	for (i = 0; i < 4; i++)
	{
		ch = str[7 - i];
		str[7 - i] = str[i];
		str[i] = ch;
	}

	printf("\n--변경 후 문자열--\n");
	printf("%s \n", str);

	return 0;
}