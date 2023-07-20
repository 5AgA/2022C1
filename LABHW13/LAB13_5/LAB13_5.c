#include <stdio.h>
int main(void)
{
	int binary[8], num, index = 0;

	printf("Enter ¾ç¼ö(< 256): ");
	scanf_s("%d", &num);
	
	while (1)
	{
		binary[index] = num % 2;
		num /= 2;
		index++;

		if (num == 0)
			break;
	}
	for (int i = index - 1; i >= 0; i--)
		printf("%d", binary[i]);
	printf("\n");

	return 0;
}