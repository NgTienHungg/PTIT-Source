// https://code.ptit.edu.vn/student/question/CPP0273
// ĐIỂM CÂN BẰNG

#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n;
    cin >> n;
    int a[n + 1] = {0};
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i] += a[i - 1];
    }

    int sum = a[n];
    for (int i = 1; i <= n; ++i) {
        int sL = a[i - 1];
        int sR = a[n] - a[i];
        if (sL == sR) {
            cout << i << endl;
            return;
        }
    }
    cout << "-1\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}