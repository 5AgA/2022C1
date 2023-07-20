#include <stdio.h>
int main(void)
{
	double num1, num2, bigNumber;

	printf("Enter a floating number: ");
	scanf_s("%lf", &num1);
	printf("Enter a floating number: ");
	scanf_s("%lf", &num2);

	if (num1 >= num2)
		printf("The bigger number is %.2f\n", num1);
	else
		printf("The bigger number is %.2f\n", num2);

	return 0;
}