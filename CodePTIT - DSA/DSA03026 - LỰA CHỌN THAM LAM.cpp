// https://code.ptit.edu.vn/student/question/DSA03026
// LỰA CHỌN THAM LAM

#include <bits/stdc++.h>
using namespace std;

string maxx(int n, int s) {
    string res(n, '0');
    for (int i = 0; i < n; ++i) {
        res[i] += min(s, 9);
        s -= min(s, 9);
        if (s == 0) break;
    }
    return res;
}

string minn(int n, int s) {
    string res(n, '0');
    res[0] = '1'; s--;
    for (int i = n - 1; i >= 0; --i) {
        res[i] += min(s, 9);
        s -= min(s, 9);
        if (s == 0) break;
    }
    return res;
}

void testCase() {
    int n, s;
    cin >> n >> s;
    if (s <= 0 || s > 9 * n) {
        cout << "-1 -1";
        return;
    }
    cout << minn(n, s) << " " << maxx(n, s);
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