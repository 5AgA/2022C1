#include <stdio.h> 
int calculatePoint(char s[]);

int main(void)
{
	char str[20];
	printf("�ܾ �Է��ϼ���(��ĭ����):");
	scanf_s("%s", str, sizeof(str));
	printf("������ %d\n", calculatePoint(str));
}
// calculatePoint �Լ��� ����
int calculatePoint(char s[])
{
	int i, point = 0, index;
	char score[27];

	for (i = 0; i < 27; i++)
		score[i] = i + 1;

	for (int j = 0; s[j] != '\0'; j++)
	{
		if (s[j] >= 'A' && s[j] <= 'Z')
		{
			index = s[j] - 65;
			point += score[index];
		}
		else if (s[j] >= 'a' && s[j] <= 'z')
		{
			index = s[j] - 97;
			point += score[index];
		}
	}

	return point;
}