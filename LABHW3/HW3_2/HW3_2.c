/*****************************************************************
HW3_1 오은아 20220783 컴퓨터학과 1학년
******************************************************************/
#include <stdio.h>
int main(void)
{
	int totalSec, hour, minute, second;

	printf("Enter the total seconds: ");
	scanf_s("%d", &totalSec);

	hour = totalSec / 3600;
	minute = totalSec % 3600 / 60;
	second = totalSec % 3600 % 60;

	printf("---Calculation Reslt---\n%d seconds\n%dh %dm %ds\n", totalSec, hour, minute, second);


	return 0;
}