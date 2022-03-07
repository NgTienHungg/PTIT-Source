// https://code.ptit.edu.vn/student/question/DSA06044
// SẮP XẾP CHẴN LẺ

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a;
    vector<int> b;
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        if (i % 2 == 1) a.push_back(x);
        else b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    for (int i = 0; i < b.size(); ++i) {
        cout << a[i] << " " << b[i] << " ";
    }
    if (n % 2 == 1) cout << a.back();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}