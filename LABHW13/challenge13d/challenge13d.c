#include <stdio.h>
#define MAX_STRING 81
#define BOOL int
#define TRUE 1
#define FALSE 0

BOOL isPalindrome(char str[]);
int main(void)
{
	char str[MAX_STRING];

	printf("* Palindrome üũ\n\n");
	printf("���ڿ� �Է�(���ڼ� %d ����): ", MAX_STRING);
	scanf_s("%s", str, sizeof(str));

	if (isPalindrome(str))
		printf("\"%s\" is a Palindrome\n\n", str);
	else
		printf("\"%s\" isn't a Palindrome\n\n", str);

	return 0;
}

BOOL isPalindrome(char s[])
{
	char rts[MAX_STRING];
	int cnt;

	for (cnt = 0; s[cnt] != '\0'; cnt++);
	cnt--;

	for (int j = 0; s[j] != '\0'; j++)
	{
		if (s[cnt - j] != s[j])
			return FALSE;
		return TRUE;
	}
}