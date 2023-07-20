#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void changeToDigitEncode(char s[], char e[]);

void changeToDigitEncode(char s[], char e[])
{
	int i, j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'I')
		{
			e[j] = s[i] - 16;     //1~9
			j++;
		}
		else if (s[i] >= 'J' && s[i] <= 'S')
		{
			e[j] = '1';                           //십대
			e[j+1] = s[i] - 26;                   //0~9
			j+=2;
		}
		else if (s[i] >= 'T' && s[i] <= 'Z')
		{
			e[j] = '2';                          //이십대
			e[j+1] = s[i] - 36;                  //0~7
			j += 2;
		}
	}
	e[j] = '\0';
}
int main(void)  //변경하지 말 것
{
	char sentence[20], encoded[40];
	scanf("%s", sentence);
	changeToDigitEncode(sentence, encoded);
	printf("%s\n", encoded);
}