#include <stdio.h>
int pow(int a, int b);
int main(void)
{
	printf("%d ^ %d == %d\n", 5, 0, pow(5, 0));
	printf("%d ^ %d == %d\n", 5, 1, pow(5, 1));
	printf("%d ^ %d == %d\n", 5, 2, pow(5, 2));
	printf("%d ^ %d == %d\n", 5, 3, pow(5, 3));
	printf("%d ^ %d == %d\n", 5, 4, pow(5, 4));
	printf("%d ^ %d == %d\n", 5, 5, pow(5, 5));
	printf("%d ^ %d == %d\n", 5, 6, pow(5, 6));
	printf("%d ^ %d == %d\n", 5, 7, pow(5, 7));
	printf("%d ^ %d == %d\n", 5, 8, pow(5, 8));
	printf("%d ^ %d == %d\n", 5, 9, pow(5, 9));
	printf("%d ^ %d == %d\n", 5, 10, pow(5, 10));
}
int pow(int a, int b)
{
	int m = a;
	if (b == 0)
		return 1;
	else if (b == 1)
		return a;
	else
		for (int i = 2; i <= b; i++)
		{
			m *= a;
		}
	return m;
}