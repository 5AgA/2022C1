#include <stdio.h>
int main(void)
{
	int n = 0, i, a = 0, c = 0;

	printf("�� ���� �����Ͻðڽ��ϱ�?: ");
	scanf_s("%d", &n);

	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = ", n, i);
		scanf_s("%d", &a);

		if (a == n * i)
			c += 1;
	}

	printf("%d ���� �����ܿ��� %d ���� �¾ҽ��ϴ�.\n", n, c);

	return 0;
}