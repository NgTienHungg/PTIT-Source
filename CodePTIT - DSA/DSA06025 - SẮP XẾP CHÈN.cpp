// https://code.ptit.edu.vn/student/question/DSA06025
// SẮP XẾP CHÈN

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;

    for (int i = 0; i < n; ++i) {
        int j = i;
        while (j > 0 && a[j] < a[j - 1]) {
            swap(a[j], a[j - 1]);
            j--;
        }

        cout << "Buoc " + to_string(i) + ": ";
        for (int j = 0; j <= i; ++j) {
            cout << a[j] << " ";
        }
        cout << endl;
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