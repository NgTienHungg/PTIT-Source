// https://code.ptit.edu.vn/student/question/DSA02006
// DÃY CON TỔNG BẰNG K

#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a, b;
bool hasAnswer;

void solve() {
    int sum = 0;
    for (int i = 0; i < b.size(); ++i) {
        sum += a[b[i]];
    }
    if (sum == k) {
        hasAnswer = true;
        cout << "[";
        for (int i = 0; i < b.size(); ++i) {
            cout << a[b[i]];
            if (i != b.size() - 1) cout << " ";
        }
        cout << "] ";
    }
}

void Try(int i) {
    for (int j = 1; j >= 0; --j) {
        if (j == 1) b.push_back(i);
        if (i == n - 1) solve();
        else Try(i + 1);
        if (j == 1) b.pop_back();
    }
}

void testCase() {
    cin >> n >> k;
    a.resize(n);
    hasAnswer = false;
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    Try(0);
    if (!hasAnswer) cout << -1;
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