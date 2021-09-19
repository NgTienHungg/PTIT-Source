// https://www.spoj.com/PTIT/problems/PTIT018D/
// PTIT018D - ACM PTIT 2018 D - MÃ HÓA DRM

#include <stdio.h>
#include <string.h>
string Alpha[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void solve()
{
    char s[15005];
    scanf("%s", s);
    int l = strlen(s);
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < l; i++)
        if (i < l / 2)
            sum1 += s[i] - 'A';
        else
            sum2 += s[i] - 'A';

    for (int i = 0; i < l / 2; i++)
        s[i] = Alpha[(s[i] - 'A' + sum1) % 26];
    for (int i = l / 2; i < l; i++)
        s[i] = Alpha[(s[i] - 'A' + sum2) % 26];

    for (int i = 0; i < l / 2; i++)
        s[i] = Alpha[(s[i] - 'A' + s[i + l / 2] - 'A') % 26];

    for (int i = 0; i < l / 2; i++)
        printf("%c", s[i]);
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solve();
    return 0;
}