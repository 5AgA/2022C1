#include <stdio.h>
int main(void)
{
	int i, score = 0, best = -1;
	
	for(i = 1; i <= 5; i++)
	{ 
		printf("Enter a score: ");
		scanf_s("%d", &score);
		
		if (score >= best)
			best = score;
	}
		
	printf("The best score is %d.\n", best);

	return 0;
}