// https://code.ptit.edu.vn/student/question/DSA02011
// MÁY ATM

#include <bits/stdc++.h>
using namespace std;

int n, S, ans;
vector<int> a;

void Try(int i, int val, int cou) {
    if (i == n || val >= S || cou >= ans) {
        if (val == S) ans = min(ans, cou);
        return;
    }
    Try(i + 1, val, cou);
    Try(i + 1, val + a[i], cou + 1);
}

void testCase() {
    cin >> n >> S;
    ans = INT_MAX;
    a.resize(n);
    for (int &i : a) cin >> i;
    Try(0, 0, 0);
    cout << (ans != INT_MAX ? ans : -1);
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