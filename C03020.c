#include <stdio.h>
#include <math.h>

int solve(int n)
{
    int res = 0, a = n;
    int check = 0, sum = 0;
    while (a > 0)
    {
        if (a % 10 == 6)
            check = 1;
        res = res * 10 + a % 10;
        sum += a % 10;
        a /= 10;
    }
    if (res == n && check == 1 && sum % 10 == 8)
        return 1;
    return 0;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    for (int i = a; i <= b; i++)
    {
        if (solve(i) == 1)
            printf("%d ", i);
    }
    return 0;
}