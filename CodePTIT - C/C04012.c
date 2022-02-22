#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    long long a[n];
    long long b[100005] = {0};
    for (long long i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
        b[a[i]]++;
    }
    for (long long i = 0; i < n; i++)
        if (b[a[i]] > 1)
        {
            printf("%lld ", a[i]);
            b[a[i]] = 0;
        }
    return 0;
}