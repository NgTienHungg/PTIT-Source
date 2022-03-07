// https://code.ptit.edu.vn/student/question/DSA01002
// TẬP CON KẾ TIẾP

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k;
    cin >> n >> k;
    vector<int> a(k + 1);
    for (int i = 1; i <= k; ++i) {
        cin >> a[i];
    }

    int i = k;
    while (a[i] == n - k + i) i--;
    if (i == 0) a[i] = 0;
    else a[i]++;
    
    while (i < k) {
        a[i + 1] = a[i] + 1;
        i++;
    }
    for (int i = 1; i <= k; ++i) {
        cout << a[i] << " ";
    }
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