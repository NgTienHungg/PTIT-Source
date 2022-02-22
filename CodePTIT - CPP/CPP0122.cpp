// https://code.ptit.edu.vn/student/question/CPP0122
// ƯỚC SỐ CHUNG LỚN NHẤT CỦA N SỐ NGUYÊN DƯƠNG ĐẦU TIÊN

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

LL gcd(LL a, LL b)
{
    while (b > 0) {
        LL x = a % b;
        a = b;
        b = x;
    }
    return a;
}

void solve()
{
    LL n;
    cin >> n;
    LL r = 1;
    for (LL i = 1; i <= n; ++i) {
        LL g = gcd(r, i);
        r = r * i / g;
    }
    cout << r << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}