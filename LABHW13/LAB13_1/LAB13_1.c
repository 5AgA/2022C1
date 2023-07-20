#include <stdio.h>
#define SIZE 5
int main(void)
{
	int arrayA[SIZE] = { 1, 2, 3, 4, 1 };
	int arrayB[SIZE];
	int arrayC[SIZE];
	int i;
	int same;

	for (int i = 0; i < SIZE; i++)
	{
		arrayB[i] = arrayA[i];
		arrayC[SIZE - 1 - i] = arrayA[i];
	}
	
	printf("ArrayA: ");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", arrayA[i]);
	printf("\n");
	printf("ArrayB: ");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", arrayB[i]);
	printf("\n");
	printf("ArrayC: ");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", arrayC[i]);
	printf("\n");

	same = 1;

	for (int j = 0; j < SIZE; j++)
	{
		if (arrayA[j] != arrayB[j])
		{
			same = 0;
			break;
		}
		else
			break;
	}
	if (same == 1)
		printf("ArrayA와 arrayB는 같다\n");
	else
		printf("ArrayA와 arrayB는 다르다\n");

	same = 1;

	for (int j = 0; j < SIZE; j++)
	{
		if (arrayA[j] != arrayC[j])
		{
			same = 0;
			break;
		}
	}
	if (same == 1)
		printf("ArrayA와 arrayC는 같다\n");
	else
		printf("ArrayA와 arrayC는 다르다\n");
}