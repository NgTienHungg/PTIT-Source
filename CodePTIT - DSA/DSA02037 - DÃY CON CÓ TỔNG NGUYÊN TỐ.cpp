// https://code.ptit.edu.vn/student/question/DSA02037
// DÃY CON CÓ TỔNG NGUYÊN TỐ

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, b;
vector<vector<int>> res;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve() {
    int sum = 0;
    for (int i : b) sum += i;
    if (isPrime(sum)) res.push_back(b);
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        if (j == 1) b.push_back(a[i]);
        if (i == n - 1) solve();
        else Try(i + 1);
        if (j == 1) b.pop_back();
    }
}

void testCase() {
    cin >> n;
    a.resize(n);
    b.clear();
    res.clear();
    for (int &i : a) cin >> i;
    sort(a.rbegin(), a.rend());
    Try(0);
    sort(res.begin(), res.end());
    for (auto i : res) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
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