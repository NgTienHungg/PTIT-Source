#include "stdio.h"

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    // hang dau tien
    for (int i = 1; i <= b; i++)
        printf("%d", i);
    printf("\n");

    // hang tiep theo
    for (int i = 2; i <= a; i++)
    {
        int j = i;
        int ktra = 0, dem = 0;
        while (dem < b)
        {
            if (j == 1)
            {
                printf("%d", j);
                j++;
                dem++;
                ktra = 1;
                continue;
            }
            if (ktra == 0)
            {
                printf("%d", j);
                j--;
                dem++;
                continue;
            }
            if (ktra == 1)
            {
                printf("%d", j);
                j++;
                dem++;
                continue;
            }
        }
        printf("\n");
    }
    return 0;
}