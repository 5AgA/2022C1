#include <stdio.h>
int strLength(char s[]);
void printUpperCase(char s[]);

int main(void)
{
	char str[81];

	printf("Enter a string:");
	scanf_s("%s", str, sizeof(str));

	printf("���̴� %d\n", strLength(str));

	printf("�빮�ڸ� ����ϸ�\n");
	printUpperCase(str);
}
int strLength(char s[])
{
	int i;
	for (i = 0; s[i] != '\0'; i++);
	return i;
}
void printUpperCase(char s[])
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'A' && s[i] <= 'Z')
			printf("%c", s[i]);
	printf("\n");
}