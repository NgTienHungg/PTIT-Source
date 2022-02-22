#include <stdio.h>

void solve()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    int tren = 0, duoi = n - 1;
    int trai = 0, phai = m - 1;
    int d = 0;
    while (d < n * m)
    {
        for (int i = trai; i <= phai; i++)
        {
            printf("%d ", a[tren][i]);
            d++;
        }
        if (d == n * m)
            break;
        tren++;
        for (int i = tren; i <= duoi; i++)
        {
            printf("%d ", a[i][phai]);
            d++;
        }
        if (d == n * m)
            break;
        phai--;
        for (int i = phai; i >= trai; i--)
        {
            printf("%d ", a[duoi][i]);
            d++;
        }
        if (d == n * m)
            break;
        duoi--;
        for (int i = duoi; i >= tren; i--)
        {
            printf("%d ", a[i][trai]);
            d++;
        }
        trai++;
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solve();
    return 0;
}