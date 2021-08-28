// https://luyencode.net/problem/DK08
// DK08 - Máy tính bỏ túi đơn giản

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b;
    char c;
    cin >> a >> c >> b;
    switch (c)
    {
    case '+':
        printf("%.2lf", a + b);
        break;
    case '-':
        printf("%.2lf", a - b);
        break;
    case '*':
        printf("%.2lf", a * b);
        break;
    case '/':
        if (b == 0)
            cout << "Math Error";
        else
            printf("%.2lf", a / b);
        break;
    }
    return 0;
}