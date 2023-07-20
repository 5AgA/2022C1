#include <stdio.h>
int main(void)
{

	int i, n = 2;
	int count = 1;

	do  
	{ 
		for (i = 2;; i++) 
		{
			if (i == n)           // n이 2보다 크고 n보다 작은 숫자로 다 안 나눠져서 i 랑 n이 같아짐
			{                                         
				printf("%d번째 소수는 %d\n", count, n);
				count++;
				break;
			}

			else if (n % i == 0)
				break;

		}

		n++;
	} while (count <= 10);

		return 0;
}


