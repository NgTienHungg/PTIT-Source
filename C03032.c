#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool prime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

bool check(int n)
{
    int a = n;
    while (a > 0)
    {
        int x = a % 10;
        if (x != 2 && x != 3 && x != 5 && x != 7)
            return 0;
        a /= 10;
    }
    if (prime(n))
        return 1;
    return 0;
}

void solve()
{
    int l, r;
    scanf("%d %d", &l, &r);
    int d = 0;
    for (int i = l; i <= r; i++)
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