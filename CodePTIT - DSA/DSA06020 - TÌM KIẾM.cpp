// https://code.ptit.edu.vn/student/question/DSA06020
// TÌM KIẾM

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, x;
    cin >> n >> x;
    vector<bool> dd(1e6 + 1, false);
    for (int i = 0; i < n; ++i) {
        int num; cin >> num;
        dd[num] = true;
    }
    if (dd[x]) cout << 1;
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