#include <stdio.h>

void solve(int t)
{
    int n;
    scanf("%d", &n);
    int a[25][25];
    int gt = n * n, cot = n, hang = n, d = 1;
    while (d <= n / 2 + 1)
    {
        for (int i = d; i <= cot; i++)
            a[d][i] = gt--;
        for (int i = d + 1; i <= hang; i++)
            a[i][cot] = gt--;
        for (int i = cot - 1; i >= d; i--)
            a[hang][i] = gt--;
        for (int i = hang - 1; i > d; i--)
            a[i][d] = gt--;
        d++;
        hang--;
        cot--;
    }
    printf("Test %d:\n", t);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
        solve(t);
    return 0;
}