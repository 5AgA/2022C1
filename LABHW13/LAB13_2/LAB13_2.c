#define SIZE 12
#include <stdio.h>
int main(void)
{
	int incomes[SIZE] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44 ,55, 66 };
	int searchKey, searchIndex, e = 0;

	printf("Ž���� ������? ");
	scanf_s("%d", &searchKey);

	for (int i = 0; i < SIZE; i++)
	{
		if (incomes[i] == searchKey)
		{
			e = 1;
			searchIndex = i + 1;
			break;
		}
	}

	if (e)
		printf("���� %d�� ���� ù��° ���� %d���Դϴ�\n", searchKey, searchIndex);
	else
		printf("���� %d�� ���� ���� �����ϴ�\n", searchKey);
}