#include <stdio.h>
void printFibo(int n);

int main(void)
{
	int num, i;

	printf("몇개의 피보나치 수열값을 출력할까요? (3보다 큰 정수): ");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
		printFibo(i);

	printf("\n");

	return 0;
}

void printFibo(int n)
{
	int n1 = 0, n2 = 1, n3 = 0, j;

	if (n == 0)
		printf("%d ", n2);
	else if (n == 1)
		printf("%d ", n2 + n1);
	else
	{
		for (j = 1; j <= n; j++ )
		{ 
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
		}
		printf("%d ", n3);
	}
	return;
}