#include <bits/stdc++.h>
using namespace std;

int s, n, p, ans = 0;
vector<int> a;
vector<bool> e(300, 1);

void eratosthenes() {
    e[0] = e[1] = 0;
    for (int i = 2; i <= sqrt(s); ++i) {
        if (e[i] == 1) {
            for (int j = i * i; j <= s; j += i) {
                e[j] = 0;
            }
        }
    }
    for (int i = p; i <= s; ++i) {
        if (e[i] == 1)
            a.push_back(i);
    }
}

void Try(int ind, int cou, int val) {
    if (cou == n) {
        if (val == s) ans++;
        return;
    }
    if (ind == a.size() || val > s) return;
    
    Try(ind + 1, cou, val);
    Try(ind + 1, cou + 1, val + a[ind]);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s >> n >> p;
    eratosthenes();

    if (a.size() < n) {
        cout << -1;
        return 0;
    }

    Try(0, 0, 0);

    if (ans == 0) cout << -1;
    else cout << ans;
    return 0;
}