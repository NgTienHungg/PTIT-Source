#include <bits/stdc++.h>
using namespace std;

int n, ans = 100;
long long a[30], S;
bool OK = 0;

void Try(int index, int count, long long sum) {
    if (count >= ans || sum > S) return;
    if (index == n) {
        if (sum == S) {
            ans = count;
            OK = 1;
        }
        return;
    }
    Try(index + 1, count, sum);
    Try(index + 1, count + 1, sum + a[index]);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> S;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    Try(0, 0, 0);
    if (OK) cout << ans;
    else cout << -1;
    return 0;
}
