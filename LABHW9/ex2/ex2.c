#include <stdio.h>
int main(void)
{
	int n1, n2, i, u = 0, m = 1;

	printf("Enter two numbers: ");
	scanf_s("%d %d", &n1, &n2);

	while (n2 != 0)
	{
		u++;
		n2 /= n1;
		
	}
	for (i = 0; i < u; i++)
	{
		printf("%d ", m);
		m *= n1;
		
	}
		printf("\n");

	return 0;
}