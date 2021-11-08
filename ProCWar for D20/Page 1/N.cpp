#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[10], b[10], vs[10];

vector<bool> v(1e5 + 1, 1);
void eratosthenes() {
    v[0] = v[1] = 0;
    for (int i = 2; i <= sqrt(1e5); ++i) {
        if (v[i]) {
            for (int j = i * i; j <= 1e5; j += i) {
                v[j] = 0;
            }
        }
    }
}

void solve() {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[b[i]];
        if (i >= k) sum -= a[b[i - k]];
        if (i + 1 >= k) {
            if (v[sum] == 0) return;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << a[b[i]] << " ";
    }
    cout << endl;
}

void Try(int i) {
    for (int j = 0; j < n; ++j) {
        if (!vs[j]) {
            b[i] = j;
            vs[j] = 1;
            if (i == n - 1) solve();
            else Try(i + 1);
            vs[j] = 0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    eratosthenes();
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    Try(0);
    return 0;
}