#include <stdio.h>

void solve(int t)
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    int b[m][n]; // Ma trận chuyển vị
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    for (int j = 0; j < m; j++)
        for (int i = 0; i < n; i++)
            b[j][i] = a[i][j];
    printf("Test %d:\n", t);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int s = 0;
            for (int k = 0; k < m; k++)
                s += a[i][k] * b[k][j];
            printf("%d ", s);
        }
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