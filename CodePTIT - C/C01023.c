#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int n;
        scanf("%d", &n);
        while (n > 0)
        {
            int z = n % 10;
            if (z == 8 || z == 6 || z == 0)
                n /= 10;
            else
            {
                printf("NO\n");
                break;
            }
        }
        if (n == 0)
            printf("YES\n");
    }
    return 0;
}