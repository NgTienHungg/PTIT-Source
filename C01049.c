#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int n;
        scanf("%d", &n);
        int even = 0, odd = 0;
        while (n > 0)
        {
            if ((n % 10) % 2 == 0)
                even++;
            else
                odd++;
            n /= 10;
        }
        printf("%d %d\n", odd, even);
    }
    return 0;
}