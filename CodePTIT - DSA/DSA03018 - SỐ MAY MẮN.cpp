// https://code.ptit.edu.vn/student/question/DSA03018
// SỐ MAY MẮN

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int seven = n / 7;
    int four = n % 7;
    while (four % 4 != 0 && seven > 0 && four <= 28) {
        four += 7;
        seven--;
    }
    if (four % 4 == 0) four /= 4;
    else {
        cout << -1;
        return;
    }
    while (four--) cout << 4;
    while (seven--) cout << 7;
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