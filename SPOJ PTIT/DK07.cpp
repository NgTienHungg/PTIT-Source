// https://luyencode.net/problem/DK07
// DK07 - Giải phương trình

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 0)
    {
        if (b == 0 && c == 0)
            cout << "INF";
        else if (b == 0 && c != 0)
            cout << "NO";
        else
            printf("%.2lf", (double)-c / b);
    }
    else
    {
        int delta = b * b - 4 * a * c;
        if (delta < 0)
            cout << "NO";
        else if (delta == 0)
            printf("%.2lf", (double)-b / (2 * a));
        else
        {
            double x = (double)(-b + sqrt(delta)) / (2 * a);
            double y = (double)(-b - sqrt(delta)) / (2 * a);
            if (x > y)
                swap(x, y);
            printf("%.2lf %.2lf", x, y);
        }
        return 0;
    }
}