#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int num1, num2, a;

	srand(time(NULL));

	num1 = rand() % 100;
	num2 = rand() % 100;

	printf("%d + %d = ", num1, num2);
	scanf_s("%d", &a);


	if (a == num1 + num2)
		printf("Your answer is right.\n");
	else if (a != num1 + num2)
		printf("Your answer is wrong.\n%d is the right answer\n", num1 + num2);

	return 0;
}