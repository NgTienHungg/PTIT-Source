#include <stdio.h>

int main()
{
    int le = 3;
    int n;
    scanf("%d", &n);
    printf("1\n");
    for (int i = 2; i <= n; i++)
    {
        int j = 1;
        int ktra = 0;
        while (1)
        {
            if (j <= 1 && ktra == 1)
            {
                printf("1");
                break;
            }
            if (j == le && ktra == 0)
            {
                printf("%d", j);
                ktra = 1;
                j -= 2;
                continue;
            }
            if (ktra == 0)
            {
                printf("%d", j);
                j += 2;
                continue;
            }
            if (ktra == 1)
            {
                printf("%d", j);
                j -= 2;
                continue;
            }
        }
        printf("\n");
        le += 2;
    }
    return 0;
}