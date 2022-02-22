#include <stdio.h>
#include <stdbool.h>

int check(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    if (sum % 10 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
    {
        int n;
        scanf("%d", &n);
        if (check(n))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}