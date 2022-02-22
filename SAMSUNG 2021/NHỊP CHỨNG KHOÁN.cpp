#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int n; cin >> n;
    vector<int> a(n), f(n);
    for (int &x : a) cin >> x;

    stack<int> st;
    for (int i = 0; i < n; ++i) {
        while (!st.empty() && a[st.top()] <= a[i]) {
            st.pop();
        }
        if (st.empty()) cout << i + 1 << " ";
        else cout << i - st.top() << " ";
        st.push(i);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}