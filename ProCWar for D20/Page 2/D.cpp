#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n; cin >> n;
    int a[1000], f[1000];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    bool ok = 0;
    stack<int> st;
    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && a[st.top()] <= a[i]) {
            st.pop();
        }
        if (st.empty())
            f[i] = -1;
        else {
            f[i] = a[st.top()];
            ok = 1;
        }
        st.push(i);
    }
    if (!ok) {
        cout << -1;
        return;
    }
    for (int i = 0; i < n; ++i) {
        if (f[i] != -1)
            cout << f[i];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}