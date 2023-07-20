#include <stdio.h>
int main(void)
{
	int n = 0, i, a = 0, c = 0;

	printf("몇 단을 연습하시겠습니까?: ");
	scanf_s("%d", &n);

	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = ", n, i);
		scanf_s("%d", &a);

		if (a == n * i)
			c += 1;
	}

	printf("%d 단의 구구단에서 %d 개를 맞았습니다.\n", n, c);

	return 0;
}