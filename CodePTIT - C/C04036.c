#include <stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);
    int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int dem = 0;
    for (int i = 0; i < 10; i++)
    {
        if (n >= a[i])
        {
            int z = n / a[i];
            dem += z;
            n -= z * a[i];
        }
        if (n == 0)
            break;
    }
    printf("%d\n", dem);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solve();
    return 0;
}