// https://code.ptit.edu.vn/student/question/DSA01007
// XÂU AB CÓ ĐỘ DÀI N

#include <bits/stdc++.h>
using namespace std;

int n;
string s;

void Try(int i) {
    for (char j = 'A'; j <= 'B'; ++j) {
        s[i] = j;
        if (i == n - 1) cout << s << " ";
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n;
    s.resize(n);
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