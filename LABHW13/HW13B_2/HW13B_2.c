#include <stdio.h>
int main(void)
{
	char str[81];
	int i, sum = 0;

	printf("Enter one word: ");
	scanf_s("%s", str, sizeof(str));

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			sum += (int)str[i] - 48;
	}
	printf("�ȿ� �ִ� ���ڵ��� ���� %d\n", sum);
}