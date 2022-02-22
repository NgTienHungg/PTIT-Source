#include <stdio.h>

void solve(int t)
{
    int m, n, p;
    scanf("%d%d%d", &m, &n, &p);
    int a[100], b[100];
    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);
    printf("Test %d:\n", t);
    for (int i = 0; i < m + n; i++)
    {
        if (i < p)
            printf("%d ", a[i]);
        else if (i >= p && i < p + n)
            printf("%d ", b[i - p]);
        else
            printf("%d ", a[i - n]);
    }
    printf("\n");
}

int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
        solve(t);
    return 0;
}