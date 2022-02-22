#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j <= 2 * i - 1; j += 2)
                printf("%d", j);
        }
        else
        {
            for (int j = 2; j <= 2 * i; j += 2)
                printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}