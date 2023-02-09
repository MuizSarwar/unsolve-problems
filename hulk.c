#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    printf("I hate ");
    for (int i = 2; i <= n; i++)
    {
        printf("that ");

        if (i % 2 == 0)
        {
            printf("I love ");
        }
        if (i % 2 != 0)
        {
            printf("I hate ");
        }
        }
    printf("it");

    return 0;
}