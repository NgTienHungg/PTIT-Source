#include <stdio.h>
#include <string.h>

void solve()
{
    char s[105];
    gets(s);
    for (int i = 0; i < strlen(s); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    char res[105][105];
    int n = 0;
    char *token = strtok(s, " ");
    while (token != NULL)
    {
        strcpy(res[n++], token);
        token = strtok(NULL, " ");
    }
    for (int i = 1; i < n; i++)
    {
        res[i][0] -= 32;
        if (i == n - 1)
            printf("%s, ", res[i]);
        else
            printf("%s ", res[i]);
    }
    for (int i = 0; i < strlen(res[0]); i++)
        res[0][i] -= 32;
    printf("%s\n", res[0]);
}

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
        solve();
    return 0;
}