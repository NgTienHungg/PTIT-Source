#include <stdio.h>
#include <math.h>

int ktnt(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[30][30];
    int dem, hang = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        dem = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if (ktnt(a[i][j]) == 1)
                dem++;
        }
        if (dem > max)
        {
            max = dem;
            hang = i;
        }
    }
    printf("%d\n", hang + 1);
    for (int i = 0; i < n; i++)
        if (ktnt(a[hang][i]) == 1)
            printf("%d ", a[hang][i]);
    return 0;
}