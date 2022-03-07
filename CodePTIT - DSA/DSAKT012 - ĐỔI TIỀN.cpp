// https://code.ptit.edu.vn/student/question/DSAKT012
// ĐỔI TIỀN

#include <bits/stdc++.h>
using namespace std;

int n, s, ans;
int a[30];

void Try(int index, int value, int count) {
    if (index == n || value >= s || count > ans) {
        if (value == s) {
            ans = min(ans, count);
        }
        return;
    }
    Try(index + 1, value, count);
    Try(index + 1, value + a[index], count + 1);
}

void testCase() {
    cin >> n >> s;
    ans = INT_MAX;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    Try(0, 0, 0);
    cout << (ans != INT_MAX ? ans : -1);
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