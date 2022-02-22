#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        while (b > 0)
        {
            int x = a % b;
            a = b;
            b = x;
        }
        printf("%d\n", a);
    }
    return 0;
}