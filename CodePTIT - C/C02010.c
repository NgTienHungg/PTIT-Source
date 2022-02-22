#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = 1; i <= a; i++)
    {
        printf("%d", i);
        int j = i + 1;
        while (j <= b)
        {
            printf("%d", j);
            j++;
        }
        if (i < b)
        {
            int j = i - 1;
            while (j > 0)
            {
                printf("%d", j);
                j--;
            }
        }
        else
        {
            int j = b - 1;
            while (j > 0)
            {
                printf("%d", j);
                j--;
            }
        }
        printf("\n");
    }
}