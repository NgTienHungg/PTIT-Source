// https://code.itptit.com/problems/100036
// Kinh nghiệm Marketing từ KOL 70 nồi bánh chưng

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int mod = 1e9 + 7;

long long Mul(long long a, long long b)
{
    if (b == 0)
        return 0;
    long long temp = Mul(a, b / 2);
    if (b & 1)
        return (a + 2 * temp) % mod;
    return (2 * temp) % mod;
}

long long Pow(long long n, long long k)
{
    if (k == 0)
        return 1;
    if (k == 1)
        return n;
    long long temp = Pow(n, k / 2);
    long long res = Mul(temp, temp);
    if (k & 1)
        return (n * res) % mod;
    return res % mod;
}

void TestCase()
{
    long long n;
    cin >> n;
    if (n < 2)
    {
        cout << n << endl;
        return;
    }

    long long mu3 = n / 3;
    long long x; // Giá trị phần dư pow(2)
    if (n % 3 == 0)
        x = 1;
    else if (n % 3 == 1)
    {
        mu3 -= 1;
        x = 4;
    }
    else if (n % 3 == 2)
        x = 2;

    long long res = Pow(3, mu3) * x % mod;
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}