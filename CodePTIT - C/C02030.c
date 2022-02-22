#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int cot = 1;
    int tang1 = -1;
    for (int i = 1; i <= n; i++)
    {
        int KhoiDau = 66;
        int Ktra = 0;
        int tang = tang1;
        for (int j = 1; j <= cot; j++)
        {
            if (j == 1)
            {
                printf("@");
                continue;
            }
            if (j == cot && j != 1)
            {
                printf("@");
                continue;
            }
            if (j >= 2 && j < cot)
            {
                if (tang > 0)
                {
                    printf("%c", KhoiDau);
                    KhoiDau += 2;
                    tang--;
                }
                else
                {
                    printf("%c", KhoiDau);
                    KhoiDau -= 2;
                    tang--;
                }
            }
        }
        cot += 2;
        tang1++;
        printf("\n");
    }
    return 0;
}