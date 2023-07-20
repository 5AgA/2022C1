#define SIZE 12
#include <stdio.h>
int main(void)
{
	int incomes[SIZE] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44 ,55, 66 };
	int searchKey, searchIndex, e = 0;

	printf("탐색할 수입은? ");
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
		printf("수입 %d를 갖는 첫번째 달은 %d월입니다\n", searchKey, searchIndex);
	else
		printf("수입 %d를 갖는 달은 없습니다\n", searchKey);
}