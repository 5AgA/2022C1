#include <stdio.h>
#define CONVERSION_FACTOR 9.0 / 5.0
int main(void)
{
	double celsius = 0.0, fahrenheit = 0.0;
	const int base = 32;
	
	printf("Enter a celsius temperature: ");
	scanf_s("%lf", &celsius);

	fahrenheit = (celsius * CONVERSION_FACTOR) + base;

	printf("Fahrenheit Equivalent : %f\n", fahrenheit);

	return 0;
}