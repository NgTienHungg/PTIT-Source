#include <stdio.h>
#include <string.h>

void solve()
{
    char s[21];
    gets(s);
    int len = strlen(s);
    int turn = 0;
    int i = 0, j = len - 1;
    while (i <= j)
    {
        if (i == j && turn == 0)
            turn = 1;
        if (s[i] != s[j])
            turn += 1;
        i++;
        j--;
    }
    if (turn == 1)
        printf("YES\n");
    else
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