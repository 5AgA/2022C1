#include <stdio.h>
#define MAX_STRING 81
int main(void)
{
	char str[MAX_STRING];
	int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
	int i;

	printf("문자열 입력 (문자수 %d 이하): ", MAX_STRING);
	scanf_s("%s", str, sizeof(str));

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
			countA++;
		else if (str[i] == 'e' || str[i] == 'E')
			countE++;
		else if (str[i] == 'i' || str[i] == 'I')
			countI++;
		else if (str[i] == 'o' || str[i] == 'O')
			countO++;
		else if (str[i] == 'u' || str[i] == 'U')
			countU++;
	}

	printf("a or A: %d 개\ne or E: %d 개\ni or I: %d 개\no or O: %d 개\nu or U: %d 개\n", countA, countE, countI, countO, countU);
}