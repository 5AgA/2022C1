#include <stdio.h>
int isPrime(int num);

int main(void)
{
	int n, p;

	do {
		printf("Enter a number<-1 for exit>: ");
		scanf_s("%d", &n);

		p = isPrime(n);
		
		if (p == 0)
			printf("소수가 아닙니다.\n");
		else if (p == 1)
			printf("소수입니다.\n"); 
	} while (n != -1);
}

int isPrime(int num)
{
	if (num == -1)
		return -1;
	else
	{
		for (int i = 2; i < num; i++)
			{
				if (num % i == 0)
					return 0;
			}
			return 1;
	}
}