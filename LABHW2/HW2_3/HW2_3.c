#include <stdio.h>
int main(void)
{
	int ����, ��, ��, ��;
	���� = 14000;
	�� = ���� / 3600;
	�� = ���� % 3600 / 60;
	�� = ���� % 3600 % 60;
	printf("%d seconds:\n%dh %dm %ds\n", ����, ��, ��, ��);

	return 0;
}