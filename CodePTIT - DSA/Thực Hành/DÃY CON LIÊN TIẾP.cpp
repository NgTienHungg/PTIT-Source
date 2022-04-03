#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    int maxx = *max_element(a.begin(), a.end());
    int len = 1;
    for (int i = 0; i < n; ++i) {
        if (a[i] == maxx) {
            int l = 1;
            while (i + 1 < n && a[i + 1] == maxx) {
                l++;
                i++;
            }
            len = max(len, l);
        }
    }
    cout << len;
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