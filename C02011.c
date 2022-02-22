#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= a; i++)
    {
        int j = i;
        int ktra = 0, dem = 0;
        while (dem < b)
        {
            if (j >= b)
            {
                printf("%d", j);
                ktra = 1;
                dem++;
                j--;
                continue;
            }
            if (ktra == 0)
            {
                printf("%d", j);
                j++;
                dem++;
                continue;
            }
            if (ktra == 1)
            {
                printf("%d", j);
                j--;
                dem++;
                continue;
            }
        }
        printf("\n");
    }
    return 0;
}