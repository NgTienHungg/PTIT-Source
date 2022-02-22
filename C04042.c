#include <stdio.h>
#include <stdbool.h>

void solve()
{
    int n;
    scanf("%d", &n);
    long long a[100001];
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    bool check = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (a[j] == a[i])
            {
                printf("%lld\n", a[i]);
                check = 1;
                break;
            }
        if (check)
            break;
    }
    if (check == 0)
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