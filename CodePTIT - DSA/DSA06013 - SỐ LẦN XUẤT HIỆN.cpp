// https://code.ptit.edu.vn/student/question/DSA06013
// SỐ LẦN XUẤT HIỆN

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, x;
    cin >> n >> x;
    vector<int> dd(1e6 + 1, 0);
    for (int i = 0; i < n; ++i) {
        int num; cin >> num;
        dd[num]++;
    }
    if (dd[x]) cout << dd[x];
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