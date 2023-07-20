#include <stdio.h>
int main(void)
{
	int num[21], n, key, cnt = 0, i;

	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
		scanf_s("%d", &num[i]);
	scanf_s("%d", &key);

	for (int j = 0; num[j] != '\0'; j++)
	{
		if (num[j] == key)
			cnt++;
	}
	printf("%d", cnt);
}