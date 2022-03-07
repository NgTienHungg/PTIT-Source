#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1);
    long long sum = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        sum += a[i];
    }

    int i = 1, j = n, len = n;
    while (len >= 1) {
        if ((long long)len * k <= sum) {
            cout << len;
            return;
        }
        if (a[i] < a[j]) {
            sum -= a[i];
            i++, len--;
        }
        else {
            sum -= a[j];
            j--, len--;
        }
    }
    cout << 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}