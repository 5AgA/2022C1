/*****************************************************************
HW3_1 ������ 20220783 ��ǻ���а� 1�г�
******************************************************************/
#include <stdio.h>
int main(void)
{
	int hour, minute, second, totalSec;

	printf("Enter h m s: ");
	scanf_s("%d %d %d", &hour, &minute, &second);

	totalSec = hour * 3600 + minute * 60 + second;

	printf("---Calculation Result---\nTotal %d seconds\n", totalSec);

	return 0;
}