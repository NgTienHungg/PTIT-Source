// https://code.ptit.edu.vn/student/question/DSA01011
// HOÁN VỊ TIẾP THEO CỦA CHUỖI SỐ

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    string s; cin >> s;
    int i = s.length() - 2;
    while (i >= 0 && s[i] >= s[i + 1]) i--;
    if (i == -1) {
        cout << n << " BIGGEST";
        return;
    }
    for (int j = s.length() - 1; j > i; --j) {
        if (s[j] > s[i]) {
            swap(s[i], s[j]);
            sort(s.begin() + i + 1, s.end());
            break;
        }
    }
    cout << n << " " << s;
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