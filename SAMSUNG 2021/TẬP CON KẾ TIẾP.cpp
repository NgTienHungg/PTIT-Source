#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n, k, a[1001];
    cin >> n >> k;
    for (int i = 1; i <= k; ++i) {
        cin >> a[i];
    }

    int i = k;
    while (a[i] == n - k + i) {
        i--;
    }
    if (i == 0)
        a[i] = 0;
    else
        a[i] += 1;

    while (i + 1 <= k) {
        a[i + 1] = a[i] + 1;
        i++;
    }

    for (int i = 1; i <= k; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}