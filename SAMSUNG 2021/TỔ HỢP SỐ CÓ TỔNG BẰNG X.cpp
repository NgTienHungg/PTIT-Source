#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

int n, x, a[21];
bool OK;

void Try(int limit, int value, vector<int> v) {
    if (value == x) {
        OK = 1;
        cout << "[";
        for (int i = 0; i < v.size() - 1; ++i) {
            cout << v[i] << " ";
        }
        cout << v.back() << "]";
        return;
    }
    for (int i = 1; i <= n; ++i) {
        if (a[i] >= limit && value + a[i] <= x) {
            v.push_back(a[i]);
            Try(a[i], value + a[i], v);
            v.pop_back();
        }
    }
}

void TestCase() {
    OK = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    Try(1, 0, {});
    if (!OK)
        cout << "-1";
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