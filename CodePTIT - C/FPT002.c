#include <stdio.h>

int main()
{
    int m, n, p, q;
    scanf("%d %d %d %d", &m, &n, &p, &q);

    /* Input array */
    int a[m][n], b[n][p], c[p][q];
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < p; ++j)
            scanf("%d", &b[i][j]);
    }
    for (int i = 0; i < p; ++i)
    {
        for (int j = 0; j < q; ++j)
            scanf("%d", &c[i][j]);
    }

    /* res[m][p] = a[m][n] * b[n][p] */
    int res[m][p];
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < p; ++j)
        {
            int s = 0;
            for (int k = 0; k < n; ++k)
                s += a[i][k] * b[k][j];
            res[i][j] = s;
        }
    }

    /* Output[m][q] = res[m][p] * c[p][q] */
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < q; ++j)
        {
            int s = 0;
            for (int k = 0; k < p; ++k)
                s += res[i][k] * c[k][j];
            printf("%d ", s);
        }
        printf("\n");
    }
    return 0;
}