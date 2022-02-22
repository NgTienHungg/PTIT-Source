#include <stdio.h>
#include <stdbool.h>

bool check(int n)
{
    int d = n % 10;
    n /= 10;
    while (n > 0)
    {
        if (n % 10 <= d)
            return 0;
        d = n % 10;
        n /= 10;
    }
    return 1;
}

void solve()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int d = 0;
    for (int i = a; i <= b; i++)
        if (check(i))
            d++;
    printf("%d\n", d);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solve();
    return 0;
}