#include <stdio.h>
int main(void)
{
	int totalMinute, hour, minute;

	printf("Enter the total minutes: ");
	scanf_s("%d", &totalMinute);

	hour = totalMinute / 60;
	minute = totalMinute % 60;

	printf("%d minutes\n%dh %dm\n", totalMinute, hour, minute);

	return 0;
}