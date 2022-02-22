#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int dd[100005] = {0};
    for (int i = 1; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        dd[a]++;
        dd[b]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (dd[i] != 1 && dd[i] != n - 1)
        {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}