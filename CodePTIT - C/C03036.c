#include <stdio.h>
#include <string.h>

void solve()
{
    char s[20];
    scanf("%s", s);
    int l = strlen(s);
    if (l % 2 == 0)
    {
        printf("NO\n");
        return;
    }
    for (int i = 0; i < l / 2; i++)
    {
        if ((s[i] - '0') % 2 == 0 || s[i] != s[l - 1 - i])
        {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solve();
    return 0;
}