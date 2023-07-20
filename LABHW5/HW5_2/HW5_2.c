#include <stdio.h>
int main(void)
{
	const double PI = 3.141592;
	int radius;
	double area, circumference;

	printf("Enter a radius: ");
	scanf_s("%d", &radius);

	area = radius * radius * PI;
	circumference = 2 * PI * radius;

	printf("The area of a circle with %d:		%f\n", radius, area);
	printf("The circumference of a circle with %d:	%f\n", radius, circumference);

	return 0;
}