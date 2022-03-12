// https://code.ptit.edu.vn/student/question/DSA07019
// HÌNH CHỮ NHẬT LỚN NHẤT

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int a[n + 1], l[n + 1], r[n + 1];
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    stack<int> st;
    for (int i = 1; i <= n; ++i) {
        while (!st.empty() && a[st.top()] >= a[i]) {
            st.pop();
        }
        if (st.empty()) l[i] = 1;
        else l[i] = st.top() + 1;
        st.push(i);
    }

    while (!st.empty()) st.pop();
    for (int i = n; i >= 1; --i) {
        while (!st.empty() && a[st.top()] >= a[i]) {
            st.pop();
        }
        if (st.empty()) r[i] = n;
        else r[i] = st.top() - 1;
        st.push(i);
    }

    long long ans = 0;
    for (int i = 1; i <= n; ++i) {
        long long s = (long long) a[i] * (r[i] - l[i] + 1);
        ans = max(ans, s);
    }
    cout << ans;
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