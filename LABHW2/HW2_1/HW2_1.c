#include <stdio.h>
int main(void)
{
	int midterm;
	int final;
	midterm = 100;
	final = 90;

	printf("이름\t\t중간\t학기말\t평균\n");
	printf("Suehee Pak\t%d\t%d\t%d\n", midterm, final, (midterm + final) / 2);
	

	return 0;
}