#include <stdio.h>
#include <math.h>

void solve()
{
    int n;
    scanf("%d", &n);
    int d = 0;
    for (int i = 1; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            if (i % 2 == 0)
                d++;
            if (n / i % 2 == 0)
                d++;
            if (i % 2 == 0 && i * i == n)
                d--;
        }
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