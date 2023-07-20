#include <stdio.h>
void get_cycle_number(int n);

int main(void)
{
	int num;

	printf("Enter a number:");
	scanf_s("%d", &num);

	get_cycle_number(num);

	return 0;
}

void get_cycle_number(int n)
{
	int lgth = 1;

	printf("%d ", n);

	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n /= 2;
			printf("%d ", n);
			lgth++;
		}
		else
		{
			n = n * 3 + 1;
			printf("%d ", n);
			lgth++;
		}
	}
	
	printf("\n±æÀÌ´Â %d\n", lgth);
}