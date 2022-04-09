// https://code.ptit.edu.vn/student/question/DSA05023
// TỔNG CÁC XÂU CON

#include <bits/stdc++.h>
using namespace std;

// void TestCase() {
//     string s; cin >> s;
//     long long ans = 0;

//     for (int i = 0; i < s.length(); ++i) {
//         for (int j = i; j < s.length(); ++j) {
//             string temp = s.substr(i, j - i + 1);
//             ans += stoll(temp);
//         }
//     }
//     cout << ans;
// }

void TestCase() {
    // QHD
    string s; cin >> s;
    long long f[15], res = 0;
    f[0] = s[0] - '0';
    res = f[0];
    for (int i = 1; i < s.length(); ++i) {
        int t = s[i] - '0';
        f[i] = f[i - 1] * 10 + t * (i + 1);
        res = res + f[i];
    }
    cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}