#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int num[100], n, sum = 0, avg;

	srand(time(NULL));

	printf("Enter the number of random numbers:(<= 100): ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
		num[i] = rand() % 100;
	for (int i = 0; i < n; i++)
		sum += num[i];
	avg = sum / n;

	printf("난수의 평균은 %d\n발생된 난수는\n", avg);

	for (int j = 0; j < n; j++)
	{
		printf(" %5d", num[j]);
		if (j % 5 == 4)
			printf("\n");
	}

	return 0;
}