#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int f[100005];
    f[0] = 1;
    f[1] = 1;
    for (int i = 2;; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
        if (f[i] == n)
        {
            printf("1");
            return 0;
        }
        else if (f[i] > n)
        {
            printf("0");
            return 0;
        }
    }
    return 0;
}