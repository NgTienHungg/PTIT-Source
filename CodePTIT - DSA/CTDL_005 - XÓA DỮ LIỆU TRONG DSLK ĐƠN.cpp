// https://code.ptit.edu.vn/student/question/CTDL_005
// XÓA DỮ LIỆU TRONG DSLK ĐƠN

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int x; cin >> x;
    for (int i = 0; i < n; ++i) {
        if (a[i] != x) cout << a[i] << " ";
    }
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