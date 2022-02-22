#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool snt(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

bool thuannghich(int n)
{
    int N = n;
    int res = 0;
    while (n > 0)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    if (res == N)
        return 1;
    return 0;
}

void solve()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int dem = 0;
    for (int i = a; i <= b; i++)
    {
        if (snt(i) && thuannghich(i))
        {
            dem++;
            printf("%d ", i);
            if (dem % 10 == 0)
                printf("\n");
        }
    }
    printf("\n");
}

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
        solve();
    return 0;
}