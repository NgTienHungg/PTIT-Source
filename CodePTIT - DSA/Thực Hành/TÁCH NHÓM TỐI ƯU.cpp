#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k; 
    cin >> n >> k;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    int cnt = 1;
    for (int i = 1; i < n; ++i) {
        if (a[i] > a[i - 1] + k) {
            cnt++;
        }
    }
    cout << cnt;
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