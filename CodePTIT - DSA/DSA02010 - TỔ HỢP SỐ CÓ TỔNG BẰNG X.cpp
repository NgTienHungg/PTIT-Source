// https://code.ptit.edu.vn/student/question/DSA02010
// TỔ HỢP SỐ CÓ TỔNG BẰNG X

#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<int> a;
bool ok;

void Try(int limit, int value, vector<int> v) {
    if (value == x) {
        ok = true;
        cout << "[";
        for (int i = 0; i < v.size(); ++i) {
            cout << v[i];
            if (i != v.size() - 1) cout << " ";
        }
        cout << "]";
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] >= limit && value + a[i] <= x) {
            v.push_back(a[i]);
            Try(a[i], value + a[i], v);
            v.pop_back();
        }
    }
}

void testCase() {
    cin >> n >> x;
    a.resize(n);
    ok = false;
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    Try(1, 0, {});
    if (!ok) cout << -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}