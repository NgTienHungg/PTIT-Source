#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool ktnt(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

void solve()
{
    int n;
    scanf("%d", &n);
    int a[101];
    int b[101], nb = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (ktnt(a[i]))
            b[nb++] = a[i];
    }
    for (int i = 0; i < nb; i++)
        printf("%d ", b[i]);
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