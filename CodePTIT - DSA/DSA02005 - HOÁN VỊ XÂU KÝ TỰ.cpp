// https://code.ptit.edu.vn/student/question/DSA02005
// HOÁN VỊ XÂU KÝ TỰ

#include <bits/stdc++.h>
using namespace std;

int n;
string a, b;
vector<bool> vs;

void Try(int i) {
    for (int j = 0; j < n; ++j) {
        if (!vs[j]) {
            b[i] = a[j];
            vs[j] = true;
            if (i == n - 1) cout << b << " ";
            else Try(i + 1);
            vs[j] = false;
        }
    }
}

void testCase() {
    cin >> a;
    sort(a.begin(), a.end());
    n = a.length();
    b.resize(n);
    vs.resize(n, false);
    Try(0);
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