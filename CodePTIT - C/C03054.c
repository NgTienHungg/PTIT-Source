#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int cut(char x)
{
    if (x == '0' || x == '8' || x == '9')
        return 0;
    if (x == '1')
        return 1;
    return -1;
}

void solve()
{
    char s[20];
    scanf("%s", s);
    long long res = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        int x = cut(s[i]);
        if (x == -1)
        {
            printf("INVALID\n");
            return;
        }
        res = res * 10 + x;
    }
    if (res == 0)
        printf("INVALID\n");
    else
        printf("%lld\n", res);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solve();
    return 0;
}