#include <stdio.h>
int main(void)
{
	char gender;
	int age;
	double height;

	printf("Enter your gender: ");
	scanf_s("%c", &gender, 1);
	printf("Enter your age: ");
	scanf_s("%d", &age);
	printf("Enter your height: ");
	scanf_s("%lf", &height);

	printf("성별		나이		키\n%c		%d		%f\n", gender, age, height);

	return 0;
}