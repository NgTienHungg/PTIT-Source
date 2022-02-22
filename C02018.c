#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int nga = n - 1;
    for (int i = 1; i <= n; i++)
    {
        int dem = 1;
        int ktra = 0;
        int j = 1;
        while (1)
        {
            if (dem <= nga)
            {
                printf("~");
                dem++;
                continue;
            }
            if (dem == n && j == 1)
            {
                printf("%d", j);
                dem++;
                break;
            }
            if (dem == n)
            {
                printf("%d", j);
                ktra = 1;
                j -= 2;
                continue;
            }
            if (j == 1 && ktra == 1)
            {
                printf("1");
                break;
            }
            if (ktra == 0)
            {
                printf("%d", j);
                j += 2;
                dem++;
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
        nga--;
    }
    return 0;
}