#include <stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);
    int a[101], max = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > max)
            max = a[i];
    }
    printf("%d\n", max);
    for (int i = 0; i < n; i++)
        if (a[i] == max)
            printf("%d ", i);
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