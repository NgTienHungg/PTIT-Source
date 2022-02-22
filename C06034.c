#include <stdio.h>
#include <string.h>

void solve()
{
    char s[105];
    scanf("%s", s);
    int l = strlen(s);
    int a[105];
    for (int i = 0; i < l; i++)
    {
        if (s[i] == 'I')
            a[i] = 1;
        else if (s[i] == 'V')
            a[i] = 5;
        else if (s[i] == 'X')
            a[i] = 10;
        else if (s[i] == 'L')
            a[i] = 50;
        else if (s[i] == 'C')
            a[i] = 100;
        else if (s[i] == 'D')
            a[i] = 500;
        else if (s[i] == 'M')
            a[i] = 1000;
    }
    int sum = a[l - 1];
    for (int i = l - 1; i >= 1; i--)
    {
        if (a[i] <= a[i - 1])
            sum += a[i - 1];
        else
            sum -= a[i - 1];
    }
    printf("%d\n", sum);
}

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
        solve();
    return 0;
}