#include <stdio.h>
#include <math.h>

int ucln(int a, int b)
{
    while (b > 0)
    {
        int x = a % b;
        a = b;
        b = x;
    }
    return a;
}

long long bcnn(int a, int b)
{
    return (long long)a * b / (ucln(a, b));
}

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%lld %d\n", bcnn(a, b), ucln(a, b));
    }
}