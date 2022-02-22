#include <stdio.h>

int e[1000006];
int p[1000006];
void eratosthenes()
{
    for (int i = 0; i <= 1e6; i++)
        e[i] = 1;
    for (int i = 2; i * i <= 1e6; i++)
        if (e[i])
            for (int j = i * i; j <= 1e6; j += i)
                e[j] = 0;
    int k = 0;
    for (int i = 2; i <= 1e6; i++)
        if (e[i])
            p[k++] = i;
}

void solve(int t)
{
    int n;
    scanf("%d", &n);
    int a[25][25];
    int gt = 0, cot = n, hang = n, d = 1;
    while (d <= n / 2 + 1)
    {
        for (int i = d; i <= cot; i++)
            a[d][i] = p[gt++];
        for (int i = d + 1; i <= hang; i++)
            a[i][cot] = p[gt++];
        for (int i = cot - 1; i >= d; i--)
            a[hang][i] = p[gt++];
        for (int i = hang - 1; i > d; i--)
            a[i][d] = p[gt++];
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
    eratosthenes();
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
        solve(t);
    return 0;
}