// https://code.ptit.edu.vn/student/question/CPP0121
// ƯỚC SỐ CHUNG - BỘI SỐ CHUNG

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b > 0)
    {
        int x = a % b;
        a = b;
        b = x;
    }
    return a;
}

long long lcm(int a, int b)
{
    return (long long)a * b / gcd(a, b);
}

void solve()
{
    int a, b;
    cin >> a >> b;
    int y = gcd(a, b);
    long long x = lcm(a, b);
    cout << x << " " << y << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}