#include <stdio.h>

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
    return (long long)a * b / ucln(a, b);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n%lld", ucln(a, b), bcnn(a, b));
    return 0;
}