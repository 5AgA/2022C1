/*****************************************************************
HW3_1 ������ 20220783 ��ǻ���а� 1�г�
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