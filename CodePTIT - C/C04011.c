#include <stdio.h>
#include <stdbool.h>

bool solve(int a[55], int i)
{
    for (int j = i; j >= 0; j--)
        if (a[i] < a[j])
            return 0;
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[55];
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        int dem = 0;
        for (int i = 0; i < n; i++)
            if (solve(a, i))
                dem++;
        printf("%d\n", dem);
    }
    return 0;
}