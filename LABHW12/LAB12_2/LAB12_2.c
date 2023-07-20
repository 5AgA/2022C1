#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int n[10], sum = 0;

	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		n[i] = rand() % 100;
		sum += n[i];
	}
	
	printf("Æò±ÕÀº %d\n", sum / 10);

	for (int j = 0; j < 10; j++)
		printf("%d ", n[j]);

	printf("\n");

	return 0;
}