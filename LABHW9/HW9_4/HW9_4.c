#include <stdio.h>
int main(void)
{

	int i, n = 2;
	int count = 1;

	do  
	{ 
		for (i = 2;; i++) 
		{
			if (i == n)           // n�� 2���� ũ�� n���� ���� ���ڷ� �� �� �������� i �� n�� ������
			{                                         
				printf("%d��° �Ҽ��� %d\n", count, n);
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


