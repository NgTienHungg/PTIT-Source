// https://code.ptit.edu.vn/student/question/DSA03012
// SẮP ĐẶT XÂU KÝ TỰ 1

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int d; cin >> d;
    string s; cin >> s;
    int dd[127] = {};
    int maxx = 0;
    for (char i : s) {
        dd[i]++;
        maxx = max(maxx, dd[i]);
    }
    if (maxx <= ceil((float)s.length() / d)) cout << 1;
    else cout << -1;
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