// https://code.ptit.edu.vn/student/question/DSA01016
// PHÂN TÍCH SỐ 1

#include <bits/stdc++.h>
using namespace std;

void Try(int limit, int remain, vector<int> a) {
    if (remain == 0) {
        cout << "(";
        for (int i = 0; i < a.size() - 1; ++i) {
            cout << a[i] << " ";
        }
        cout << a.back() << ") ";
    }
    for (int i = limit; i >= 1; --i) {
        if (remain >= i) {
            a.push_back(i);
            Try(i, remain - i, a);
            a.pop_back();
        }
    }
}

void testCase() {
    int n; cin >> n;
    Try(n, n, {});
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