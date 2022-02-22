#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    gets(s);
    int dem1 = 0, dem2 = 0, dem3 = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            dem1++;
        else if (s[i] >= '0' && s[i] <= '9')
            dem2++;
        else
            dem3++;
    }
    printf("%d %d %d", dem1, dem2, dem3);
    return 0;
}