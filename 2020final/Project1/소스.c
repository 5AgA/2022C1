#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int str[30], str2[30];
    int i;
    int n;
    int element;
    int post;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &str[i]);

    scanf("%d %d", &post, &element);


    for (i = 0; i < n + 1; i++)
    {
        if (i == post)
            str2[post] = element;
        else if (i > post)
            str2[i - 1] = str[i];
        else if (i < post)
            str2[i] = str[i];
    }
    for (i = 0; i < n + 1; i++)
        printf("%d ", str2[i]);
}