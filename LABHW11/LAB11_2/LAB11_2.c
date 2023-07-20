#include <stdio.h>
int pow(int a, int b);
int main(void)
{
	int x, y;

	printf("Enter the number X: ");
	scanf_s("%d", &x);
	printf("Enter the number Y: ");
	scanf_s("%d", &y);

	printf("%d ^ %d == %d\n", x, y, pow(x, y));
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