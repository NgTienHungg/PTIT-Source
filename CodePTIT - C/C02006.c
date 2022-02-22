#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= a; i++)
    {
        for (int j = b + i - 2; j >= b; j--)
            printf("~");
        for (int j = 1; j <= b; j++)
        {
            if (i == 1 || i == a)
                printf("*");
            else
            {
                if (j == 1 || j == b)
                    printf("*");
                else
                    printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}