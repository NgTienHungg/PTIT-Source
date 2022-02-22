#include <bits/stdc++.h>
using namespace std;

long long n, x;
vector<long long> a;

bool bSearch(int l, int r, long long val) {
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == val) return 1;
        if (a[m] > val) r = m - 1;
        else l = m + 1;
    }
    return 0;
}

void TestCase() {
    cin >> n >> x;
    a.resize(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i] += a[i - 1];
    }

    if (a[n] == x) {
        cout << "YES";
        return;
    }

    for (int i = 1; i <= n; ++i) {
        if (bSearch(i, n, a[i - 1] + x)) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}