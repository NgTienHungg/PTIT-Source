// https://www.spoj.com/PTIT/problems/BCSTACK/
// BCSTACK - Cấu trúc dữ liệu ngăn xếp (stack) (Cơ bản)

#include <stdio.h>
#include <string.h>

typedef long long ll;

ll st[1005];
int Top = 0;

void init()
{
    Top = 0;
}

void push(ll num)
{
    Top++;
    st[Top] = num;
}

void pop()
{
    if (Top > 0)
        Top--;
}

void top()
{
    if (Top == 0)
        printf("-1\n");
    else
        printf("%lld\n", st[Top]);
}

void size()
{
    printf("%d\n", Top);
}

void empty()
{
    if (Top == 0)
        printf("1\n");
    else
        printf("0\n");
}

int main()
{
    char s[1001];
    while (1)
    {
        scanf("%s", s);
        if (strcmp(s, "end") == 0)
            break;
        else if (strcmp(s, "init") == 0)
            init();
        else if (strcmp(s, "push") == 0)
        {
            ll num;
            scanf("%lld", &num);
            push(num);
        }
        else if (strcmp(s, "pop") == 0)
            pop();
        else if (strcmp(s, "top") == 0)
            top();
        else if (strcmp(s, "size") == 0)
            size();
        else if (strcmp(s, "empty") == 0)
            empty();
    }
    return 0;
}