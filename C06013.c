#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void solve()
{
    char s[1005] = {};
    scanf("%s", s);
    int d = 0;
    bool dd[10] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[0] == '0' || s[i] < '0' || s[i] > '9')
        {
            printf("INVALID\n");
            return;
        }
        int x = s[i] - '0';
        if (dd[x] == 1)
            continue;
        dd[x] = 1;
        d++;
        if (d == 10)
        {
            printf("YES\n");
            return;
        }
    }
    printf("NO\n");
}

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
        solve();
    return 0;
}