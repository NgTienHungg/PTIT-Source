#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int gtri = b;
    if (gtri < a)
        gtri = a;
    for (int i = 1; i <= a; i++)
    {
        int j = gtri;
        int ktra = 0, dem = 0;
        while (dem < b)
        {
            if (j == 1)
            {
                ktra = 1;
                dem++;
                printf("%d", j);
                j++;
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
        gtri--;
    }
    return 0;
}