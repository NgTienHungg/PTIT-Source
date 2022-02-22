#include <stdio.h>
#include <math.h>

int ktnt(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

void solve(int t)
{
    int n;
    scanf("%d", &n);
    int a[101], max = 0;
    int dd[100005] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > max)
            max = a[i];
        if (ktnt(a[i]) == 1)
            dd[a[i]]++;
    }
    printf("Test %d:\n", t);
    for (int i = 2; i <= max; i++)
        if (dd[i] >= 1)
            printf("%d xuat hien %d lan\n", i, dd[i]);
}

int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
        solve(t);
    return 0;
}