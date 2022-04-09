#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> even, odd, dd(n, 0);
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        (x % 2 == 0) ? even.push_back(x) : odd.push_back(x);
        dd[i] = x % 2;
    }
    sort(even.begin(), even.end());
    sort(odd.rbegin(), odd.rend());
    int i = 0, j = 0;
    for (int k = 0; k < n; ++k) {
        cout << (dd[k] ? odd[j++] : even[i++]) << " ";
    }
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

// 10
// 1 2 3 4 5 6 7 7 9 6