#include <stdio.h>
#define MAX_STRING 81
int main(void)
{
	char str[MAX_STRING];
	int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
	int i;

	printf("���ڿ� �Է� (���ڼ� %d ����): ", MAX_STRING);
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

	printf("a or A: %d ��\ne or E: %d ��\ni or I: %d ��\no or O: %d ��\nu or U: %d ��\n", countA, countE, countI, countO, countU);
}