#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool check(char s[])
{
    int l = strlen(s);
    int even = 0, odd = 0;
    for (int i = 0; i < l; i++)
        if ((s[i] - '0') % 2 == 0)
            even++;
        else
            odd++;
    if ((s[l - 1] - '0') % 2 == 0 && even > odd)
        return 1;
    return 0;
}

void solve()
{
    char s[20];
    scanf("%s", s);
    if (check(s))
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