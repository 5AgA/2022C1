#include <stdio.h>
int main(void)
{
	int num1, num2, answer;
	char op;

	printf("Enter an operator: ");
	scanf_s("%c", &op, sizeof(op));
	printf("Enter the first operand: ");
	scanf_s("%d", &num1);
	printf("Enter the second operand: ");
	scanf_s("%d", &num2);
	printf("%d %c %d = ", num1, op, num2);
	scanf_s("%d", &answer);

	switch (op)
	{
	case '+':
		if (answer == num1 + num2)
			printf("Right answer\n");
		else
			printf("Wrong!\n%d is the right answer\n", num1 + num2);
		break;
	case '-':
		if (answer == num1 - num2)
			printf("Right answer\n");
		else
			printf("Wrong!\n%d is the right answer\n", num1 - num2);
		break;
	case '*':
		if (answer == num1 * num2)
			printf("Right answer\n");
		else
			printf("Wrong!\n%d is the right answer\n", num1 * num2);
		break;
	case '/':
		if (answer == num1 / num2)
			printf("Right answer\n");
		else
			printf("Wrong!\n%d is the right answer\n", num1 / num2);
		break;
	}
	return 0;
}