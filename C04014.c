#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n], dd[100005] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        dd[a[i]]++;
    }
    for (int i = 0; i < n; i++)
        if (dd[a[i]] > 0)
        {
            printf("%d %d\n", a[i], dd[a[i]]);
            dd[a[i]] = 0;
        }
    return 0;
}