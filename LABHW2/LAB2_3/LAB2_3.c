#include <stdio.h>
int main(void)
{
	int totalMinute;
	int hour;
	int minute;
	totalMinute = 130;
	hour = totalMinute / 60;
	minute = totalMinute % 60;
	
	printf("%d��:\n%dh %dm\n", totalMinute, hour, minute);

	return 0;
}