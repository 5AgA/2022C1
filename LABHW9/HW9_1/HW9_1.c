#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int num1, num2, op, a;
	char ch;

	srand(time(NULL));

	do
	{
		num1 = rand() % 100;
		num2 = rand() % 100;
		op = rand() % 4;

		switch (op)
		{
			case 0:
				printf("%d + %d = ", num1, num2);
				scanf_s("%d", &a);

				if (a == num1 + num2)
					printf("Your answer is right.\n");
				else
					printf("Your answer is wrong.\n%d is the right answer\n", num1 + num2);
				break;
			
			case 1:
				printf("%d - %d = ", num1, num2);
				scanf_s("%d", &a);

				if (a == num1 - num2)
					printf("Your answer is right.\n");
				else
					printf("Your answer is wrong.\n%d is the right answer\n", num1 - num2);
				break;

			case 2:
				printf("%d * %d = ", num1, num2);
				scanf_s("%d", &a);

				if (a == num1 * num2)
					printf("Your answer is right.\n");
				else
					printf("Your answer is wrong.\n%d is the right answer\n", num1 * num2);
				break;

			case 3:
				printf("%d / %d = ", num1, num2);
				scanf_s("%d", &a);

				if (a == num1 / num2)
					printf("Your answer is right.\n");
				else
					printf("Your answer is wrong.\n%d is the right answer\n", num1 / num2);
				break;
		}

		while (getchar() != '\n');

		printf("Do you want to play again?(y/n)");
		scanf_s("%c", &ch, 1);

	} while (ch == 'y');

	return 0;
}