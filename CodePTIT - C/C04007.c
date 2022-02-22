#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int a[100], b[100];
    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);
    int k;
    scanf("%d", &k);
    for (int i = 0; i < m + n; i++)
    {
        if (i < k)
            printf("%d ", a[i]);
        else if (i >= k && i < k + n)
            printf("%d ", b[i - k]);
        else
            printf("%d ", a[i - n]);
    }
    return 0;
}