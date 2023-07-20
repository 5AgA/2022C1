#include <stdio.h>
int get_cycle_number(int n);

int main(void)
{
	int num, gcn;

	do {
		printf("Enter a number:");
		scanf_s("%d", &num);
		
		if (num == -1)
			break;

		gcn = get_cycle_number(num);

		printf("±æÀÌ´Â %d\n", gcn);
	} while (num != -1);
	
	return 0;
}

int get_cycle_number(int n)
{
	int lgth = 1;

	printf("%d ", n);

	while (n > 1)
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
	printf("\n");

	return lgth;
}