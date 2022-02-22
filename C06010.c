#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void solve()
{
    char s[501];
    scanf("%s", &s);
    int l = strlen(s);
    bool check = 1;
    for (int i = 0, j = l - 1; i <= (l / 2 - 1); i++, j--)
        if (s[i] != s[j] || s[i] % 2 != 0)
        {
            check = 0;
            break;
        }
    if (l % 2 != 0 && s[l / 2] % 2 != 0)
        check = 0;
    if (check)
        printf("YES\n");
    else
        printf("NO\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solve();
    return 0;
}