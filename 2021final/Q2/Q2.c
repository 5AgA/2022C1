#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int indexSearch(char s[], char searchKey)
{
	for (int i = 0; s[i] != '\0'; i++)
		if (s[i] == searchKey)
			return i + 1;
	return -1;
}
int main(void)         
{
	char s[20];
	char key;
	scanf("%s %c", s, &key);

	printf("%d\n", indexSearch(s, key));

	return 0;
}