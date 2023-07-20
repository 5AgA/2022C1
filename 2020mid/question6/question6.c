#include <stdio.h>
int main(void)
{
	int n, key, num = 0, loc = 0, i;

	scanf_s("%d %d", &n, &key);
	
	for (i = 1; i <= n; i++)
	{ 
		scanf_s("%d", &num);

		if (loc == 0 && key == num)
			loc = i;
	}

	if (loc)
		printf("%d\n", loc);
	else
		printf("not found.\n");
	
	return 0;
}