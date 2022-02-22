#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int t[50][50];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &t[i][j]);
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == a - 1)
                printf("%d ", t[b - 1][j]);
            else if (i == b - 1)
                printf("%d ", t[a - 1][j]);
            else
                printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}