#include <stdio.h>
int square2(int n);
int main(void)
{
	int result;
	result = square2(5);
	printf("������ %d\n", result);
}

int square2(int n)
{
	return n * n;
}