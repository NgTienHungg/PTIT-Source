// https://code.ptit.edu.vn/student/question/CPP0181
// SỐ LẶP LẠI

#include <bits/stdc++.h>
#define endl '\n'
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

void TestCase()
{
    int a, p, q;
    cin >> a >> p >> q;
    int d = gcd(p, q);
    for (int i = 1; i <= d; ++i)
        cout << a;
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}

// Lặp lại Ucln(p, q) lần a