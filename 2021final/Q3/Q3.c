#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printF(int num[]);
int main(void)
{
	int n[20], num, std, small[20], big[20], s=0, b=0;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
		scanf("%d", &n[i]);

	scanf("%d", &std);

	for (int i = 0; i < num; i++)
	{
		if (n[i] < std)
			small[s++] = n[i];    //�������� �̸�
		else if (n[i] >= std)
			big[b++] = n[i];      //�������� �̻�
	}
	small[s] = '\0';
	big[b] = '\0';
	printF(small);
	printF(big);

}
void printF(int num[])
{
	for (int i = 0; num[i] != '\0'; i++)
		printf("%d ", num[i]);
	printf("\n");
}