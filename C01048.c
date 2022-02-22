#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int even = 0, odd = 0, t;
    while (n > 0)
    {
        t = n % 10;
        if (t % 2 == 0)
            even++;
        else
            odd++;
        n /= 10;
    }
    printf("%d %d", odd, even);
    return 0;
}