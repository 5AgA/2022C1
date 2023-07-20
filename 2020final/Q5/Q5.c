#include <stdio.h>
int main(void)
{
	int num, n[20], element, nn[21], pos;

	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
		scanf_s("%d", &n[i]);           //n[5] 
	scanf_s("%d %d", &pos, &element);    // pos = 3

	for (int i = 0; i < pos; i++)     // n[2]
		nn[i] = n[i];
	nn[pos] = element;
	for (int i = pos + 1; i < num + 1; i++)    //n[3]
		nn[i] = n[i - 1];
	
	for (int i = 0; i < num + 1; i++)
		printf("%d ", nn[i]);
}