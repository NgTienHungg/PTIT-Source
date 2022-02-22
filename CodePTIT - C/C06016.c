#include <stdio.h>
#include <string.h>

int main()
{
    char s1[101], s2[101];
    gets(s1);
    gets(s2);
    int p;
    scanf("%d", &p);
    int P = p - 1;
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    for (int i = 0; i < l1 + l2; i++)
    {
        if (i < P)
            printf("%c", s1[i]);
        else if (i >= P && i < P + l2)
            printf("%c", s2[i - P]);
        else
            printf("%c", s1[i - l2]);
    }
    return 0;
}