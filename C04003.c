#include <stdio.h>

int sosanh(int n, int a[101], int b[101])
{
    for (int i = 0; i < n; i++)
        if (a[i] != b[i])
            return 0;
    return 1;
}

void solve()
{
    int n;
    scanf("%d", &n);
    int a[101], b[101];
    for (int i = 0, j = n - 1; i < n, j >= 0; i++, j--)
    {
        scanf("%lld", &a[i]);
        b[j] = a[i];
    }
    if (sosanh(n, a, b) == 1)
        printf("YES\n");
    else
        printf("NO\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solve();
    return 0;
}