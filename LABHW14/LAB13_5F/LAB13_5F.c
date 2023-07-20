#include <stdio.h>
void printArray(int a[], int size);
void reverse(int a[], int size);

int main(void)
{
	int binary[8];
	int num;
	int bIndex = 0; // binary �迭�� �ε��� 

	printf("Enter ���(<256):");
	scanf_s("%d", &num);

	while (num > 0)
	{
		binary[bIndex] = num % 2;
		num /= 2;
		bIndex++;
	}

	reverse(binary, bIndex);
	printArray(binary, bIndex);
	// binary �� �������� �ִ� �ڵ带 �߰�, 8 �� ��� �������� ���� �Ųٷ� ����. binary[] <- 0001 
	// ��Ʈ: while�� ���
	// binary �� �������� �ٲ� ��, ����Ѵ�(�ռ� ������ reverse, printArray �� ȣ��). 
	return 0;
}

void printArray(int a[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d", a[i]); // ���鹮�ھ��� ����ϵ��� ������ printArray �� ����
	printf("\n");
	return;
}

void reverse(int a[], int size) // �� ������ ���Ǹ� �״�� ���
{
	int i, space;

	for (i = 0; i < size / 2; i++)
	{
		space = a[i];
		a[i] = a[size - 1 - i];
		a[size - 1 - i] = space;
	}
	return;
}