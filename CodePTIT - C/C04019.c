#include <stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);
    int a[101];
    int dd[30001] = {0}, dem = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        dd[a[i]]++;
        if (dd[a[i]] > dem)
            dem = dd[a[i]];
    }
    for (int i = 0; i < n; i++)
    {
        if (dd[a[i]] == dem)
        {
            printf("%d ", a[i]);
            dd[a[i]] = 0;
        }
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