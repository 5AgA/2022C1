#include <stdio.h>
int main(void)
{
	int cash, bread, cookie, cola;

	printf("Enter ±Ý¾×:");
	scanf_s("%d", &cash);

	for (bread = 500; bread < cash; bread += 500)
	for (cookie = 700; cookie < cash; cookie += 700)
	for (cola = 400; cola < cash; cola += 400)

			if (bread + cookie + cola == cash)
				printf("»§: %d	ÄíÅ°: %d	ÄÝ¶ó: %d\n", bread / 500, cookie / 700, cola / 400);
				

	return 0;
}