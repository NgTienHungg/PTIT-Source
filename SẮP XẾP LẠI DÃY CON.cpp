#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    vector<int> b(a.begin(), a.end());
    sort(b.begin(), b.end());

    int l = 0, r = n - 1;
    while (r > 0 && a[r] == b[r]) r--;
    while (l < r && a[l] == b[l]) l++;
    cout << l + 1 << " " << r + 1;
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