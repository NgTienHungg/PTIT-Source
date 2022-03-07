// https://www.spoj.com/PTIT/problems/BCQUEUE/
// BCQUEUE - Cấu trúc dữ liệu hàng đợi (queue) (Cơ bản)

#include <stdio.h>
#include <string.h>

int q[1005];
int d = 0;

void size()
{
    printf("%d\n", d);
}

void empty()
{
    if (d == 0)
        printf("YES\n");
    else
        printf("NO\n");
}

void push()
{
    int x;
    scanf("%d", &x);
    q[d++] = x;
}

void pop()
{
    if (d == 0)
        return;
    for (int i = 0; i < d - 1; i++)
        q[i] = q[i + 1];
    d -= 1;
}

void front()
{
    if (d == 0)
        printf("-1\n");
    else
        printf("%d\n", q[0]);
}

void back()
{
    if (d == 0)
        printf("-1\n");
    else
        printf("%d\n", q[d - 1]);
}

int main()
{
    int Test;
    scanf("%d", &Test);
    while (Test--)
    {
        int t;
        scanf("%d", &t);
        if (t == 1)
            size();
        else if (t == 2)
            empty();
        else if (t == 3)
            push();
        else if (t == 4)
            pop();
        else if (t == 5)
            front();
        else if (t == 6)
            back();
    }
    return 0;
}