// https://code.ptit.edu.vn/student/question/DSA07028
// NHỊP CHỨNG KHOÁN

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    stack<int> st;
    for (int i = 1; i <= n; ++i) {
        while (!st.empty() && a[st.top()] <= a[i]) {
            st.pop();
        }
        if (st.empty()) cout << i << " ";
        else cout << i - st.top() << " ";
        st.push(i);
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