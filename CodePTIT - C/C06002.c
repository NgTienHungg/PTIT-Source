#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char s[101];
    gets(s);
    for (int i = 0; i < strlen(s); i++)
        s[i] = toupper(s[i]);
    puts(s);
    return 0;
}