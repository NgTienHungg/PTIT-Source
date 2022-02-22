#include <stdio.h>
#include <string.h>

typedef long long ll;

ll MinSum(char a[], char b[])
{
    ll res1 = 0, res2 = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        int x = a[i] - '0';
        if (x == 6)
            x = 5;
        res1 = res1 * 10 + x;
    }
    for (int i = 0; i < strlen(b); i++)
    {
        int x = b[i] - '0';
        if (x == 6)
            x = 5;
        res2 = res2 * 10 + x;
    }
    return res1 + res2;
}

ll MaxSum(char a[], char b[])
{
    ll res1 = 0, res2 = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        int x = a[i] - '0';
        if (x == 5)
            x = 6;
        res1 = res1 * 10 + x;
    }
    for (int i = 0; i < strlen(b); i++)
    {
        int x = b[i] - '0';
        if (x == 5)
            x = 6;
        res2 = res2 * 10 + x;
    }
    return res1 + res2;
}

void solve()
{
    char a[20], b[20];
    scanf("%s %s", a, b);
    printf("%lld %lld\n", MinSum(a, b), MaxSum(a, b));
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solve();
    return 0;
}