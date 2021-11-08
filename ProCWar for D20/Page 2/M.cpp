#include <bits/stdc++.h>
using namespace std;

void sort(long long &a, long long &b, long long &c) {
    if (a < b) swap(a, b);
    if (a < c) swap(a, c);
    if (b < c) swap(b, c);
}

void TestCase() {
    long long a, b, c;
    cin >> a >> b >> c;
    sort(a, b, c);
    long long ans = min(a, b + c);
    long long du = b + c - ans, add = du / 2;
    if (add > c) ans += c;
    else ans += add;
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}