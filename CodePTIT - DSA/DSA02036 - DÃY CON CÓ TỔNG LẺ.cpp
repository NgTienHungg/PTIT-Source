// https://code.ptit.edu.vn/student/question/DSA02036
// DÃY CON CÓ TỔNG LẺ

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, b;
set<vector<int>> ss;

void Try(int i, int s) {
    for (int j = i; j < n; ++j) {
        b.push_back(a[j]);
        s += a[j];
        if (s % 2 == 1) {
            vector<int> s(b.rbegin(), b.rend());
            ss.insert(s);
        }
        if (j + 1 < n) Try(j + 1, s);
        b.pop_back();
        s -= a[j];
    }
}

void testCase() {
    a.clear();
    b.clear();
    ss.clear();

    cin >> n;
    a.resize(n);
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    Try(0, 0);
    for (auto i : ss) {
        for (auto j : i) {
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