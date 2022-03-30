// https://code.ptit.edu.vn/student/question/DSA04013
// SẮP XẾP KANGURU

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) {
        cin >> i;
    }
    sort(a.begin(), a.end());
    int ans = n, l = n / 2 - 1, r = n - 1;
    while (l >= 0) {
        if (a[r] >= a[l] * 2) {
            ans--;
            l--; r--;
        }
        else l--;
    }
    cout << ans;
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