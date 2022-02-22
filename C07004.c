#include <stdio.h>
#include <math.h>

int ucln(int a, int b)
{
    while (a != b)
    {
        int x = a % b;
        a = b;
        b = x;
    }
    return a;
}

int bcnn(int a, int b)
{
    return a * b / ucln(a, b);
}

// Rút gọn phân số và in ra
void solve(int a, int b)
{
    if (ucln(a, b) != 0)
    {
        int z = ucln(a, b);
        a /= z;
        b /= z;
    }
    printf("%d/%d\n", a, b);
}

int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        // Rút gọn phân số a/b, c/d
        if (ucln(a, b) != 1)
        {
            int z = ucln(a, b);
            a /= z;
            b /= z;
        }
        if (ucln(c, d) != 1)
        {
            int z = ucln(c, d);
            c /= z;
            d /= z;
        }

        int mau = bcnn(b, d);
        int tu1 = mau * a / b, tu2 = mau * c / d;

        printf("Case #%d:\n", t);

        //  In ra 2 phân số sau khi quy đồng
        printf("%d/%d %d/%d\n", tu1, mau, tu2, mau);

        // In ra tổng 2 phân số
        solve(tu1 + tu2, mau);

        // In ra thương 2 phân số
        solve(tu1, tu2);
    }
    return 0;
}