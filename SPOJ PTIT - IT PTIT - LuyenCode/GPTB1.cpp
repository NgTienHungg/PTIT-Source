// https://luyencode.net/problem/GPTB1
// GPTB1 - Hệ phương trình bậc nhất

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void change(ll bc, ll &a, ll &b, ll &c) {
    b *= bc / a;
    c *= bc / a;
    a = bc;
}

int main() {
    ll a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    ll uc = __gcd(a, d);
    ll bc = a * d / uc;
    change(bc, a, b, c);
    change(bc, d, e, f);

    if (b == e && c == f) {
        cout << "VOSONGHIEM";
    }
    else if (b == e && c != f) {
        cout << "VONGHIEM";
    }
    else {
        double y = (double)(c - f) / (b - e);
        double x = (double)(c - b * y) / a;
        cout << fixed << setprecision(2) << x << " " << y;
    }
    return 0;
}