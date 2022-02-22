// https://code.ptit.edu.vn/student/question/CPP0142
// NGUYÊN TỐ CÙNG NHAU

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

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
    int n;
    cin >> n;
    int d = 1;
    for (int i = 2; i < n; ++i)
    {
        if (gcd(i, n) == 1)
            d++;
    }
    if (isPrime(d))
        cout << "1\n";
    else
        cout << "0\n";
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}