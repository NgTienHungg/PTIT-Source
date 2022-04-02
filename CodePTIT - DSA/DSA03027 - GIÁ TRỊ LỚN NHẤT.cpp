// https://code.ptit.edu.vn/student/question/DSA03027
// GIÁ TRỊ LỚN NHẤT

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    long long s = 0;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        s += abs(x) + x;
    }
    cout << s;
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