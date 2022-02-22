#include <stdio.h>

int sum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (sum(a) > sum(b))
        printf("%d %d", b, a);
    else
        printf("%d %d", a, b);
    return 0;
}