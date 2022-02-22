#include <stdio.h>
#include <string.h>

int Find(char a[1005][1005], char s[1005], int n)
{
    for (int i = 0; i < n; i++)
        if (strcmp(a[i], s) == 0)
            return i;
    return -1;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{
    char s[10005];
    char a[1005][1005];
    int b[1005] = {0};
    int n = 0;
    int MaxLen = 0;
    while (scanf("%s", s) != -1)
    {
        int vt = Find(a, s, n);
        if (vt == -1)
        {
            strcpy(a[n], s);
            b[n] = 1;
            n++;
            MaxLen = max(MaxLen, strlen(s));
        }
        else
            b[vt]++;
    }
    for (int i = 0; i < n; i++)
        if (strlen(a[i]) == MaxLen)
            printf("%s %d %d\n", a[i], MaxLen, b[i]);
    return 0;
}