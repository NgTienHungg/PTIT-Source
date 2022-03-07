// https://code.ptit.edu.vn/student/question/DSA06007
// SẮP XẾP DÃY CON LIÊN TỤC

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    vector<int> b = a;
    sort(a.begin(), a.end());
    int i = 0, j = n - 1;
    while (a[i] == b[i]) i++;
    while (a[j] == b[j] && j > i) j--;
    cout << i + 1 << " " << j + 1;
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