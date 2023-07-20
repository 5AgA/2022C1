#include <stdio.h>
int main(void)
{
	char s[30];
	int	lngth, cnt = 0;
	scanf_s("%s", s, sizeof(s));
	for (lngth = 0; s[lngth] != '\0'; lngth++);
	
	for (int i = 0; i < lngth / 2; i++)    // 012 3 456
	{
		if (s[lngth - 1 - i] != s[i])
		{
			s[lngth - 1 - i] = s[i];
			cnt++;
		}
	}
	printf("%d %s", cnt, s);
	printf("\n");
	return 0;
}