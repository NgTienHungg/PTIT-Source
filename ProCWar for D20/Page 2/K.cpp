#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n; cin >> n;
    vector<int> a(n), R(n);
    for (auto &x : a) cin >> x;

    stack<int> st;
    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && a[st.top()] > a[i]) {
            st.pop();
        }
        if (st.empty())
            R[i] = 0;
        else
            R[i] = a[st.top()];
        st.push(i);
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] - R[i] << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}