#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void Swap(char a[], char b[])
{
    char tmp[505];
    strcpy(tmp, a);
    strcpy(a, b);
    strcpy(b, tmp);
}

int Compare(char a[], char b[])
{
    if (strlen(a) > strlen(b))
        return 1;
    if (strlen(a) < strlen(b))
        return -1;
    return strcmp(a, b);
}

void solve()
{
    char a[505], b[505];
    scanf("%s %s", a, b);
    if (Compare(a, b) == 0)
    {
        printf("0\n");
        return;
    }
    if (Compare(a, b) < 0)
        Swap(a, b);
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    char res[505];
    int n = i;
    res[n + 1] = '\0';
    int remember = 0;
    while (j >= 0)
    {
        int digit = (a[i--] - '0') - (b[j--] - '0') - remember;
        if (digit < 0)
        {
            digit += 10;
            remember = 1;
        }
        else
            remember = 0;
        res[n--] = digit % 10 + '0';
    }
    while (i >= 0)
    {
        int digit = (a[i--] - '0') - remember;
        if (digit < 0)
        {
            digit += 10;
            remember = 1;
        }
        else
            remember = 0;
        res[n--] = digit % 10 + '0';
    }
    bool ok = 0;
    for (int k = 0; k < strlen(a); k++)
    {
        if (res[k] != '0' && ok == 0)
            ok = 1;
        if (ok)
            printf("%c", res[k]);
    }
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