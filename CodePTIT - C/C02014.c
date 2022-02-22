#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int l = 1, r = 2 * n - 1;
    for (int i = 1; i <= n; i++)
    {
        int a = n;
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j < l)
            {
                printf("%d", a);
                a--;
            }
            else if (j >= r)
            {
                printf("%d", a);
                a++;
            }
            else
                printf("%d", a);
        }
        l++;
        r--;
        printf("\n");
    }
    l -= 2;
    r += 2;
    for (int i = 2; i <= n; i++)
    {
        int a = n;
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j < l)
            {
                printf("%d", a);
                a--;
            }
            else if (j >= r)
            {
                printf("%d", a);
                a++;
            }
            else
                printf("%d", a);
        }
        l--;
        r++;
        printf("\n");
    }
}