#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int cot = 1;
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            int a = dem + 1;
            for (int j = 1; j <= cot; j++)
            {
                printf("%d ", a);
                a++;
                dem++;
            }
        }
        if (i % 2 == 0)
        {
            int a = dem + i;
            for (int j = 1; j <= cot; j++)
            {
                printf("%d ", a);
                a--;
                dem++;
            }
        }
        cot++;
        printf("\n");
    }
    return 0;
}