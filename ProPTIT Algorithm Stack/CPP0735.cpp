// https://code.ptit.edu.vn/student/question/CPP0735
// MA TRẬN CON LỚN NHẤT

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &a, int n) {
    // Max min trên đoạn tịnh tiến
    vector<int> L(n), R(n);
    stack<int> st;

    // Solve L[]
    for (int i = 0; i < n; ++i) {
        while (!st.empty() && a[st.top()] >= a[i]) {
            st.pop();
        }
        if (st.empty())
            L[i] = 0;
        else
            L[i] = st.top() + 1;
        st.push(i);
    }

    // Reset stack
    while (!st.empty()) {
        st.pop();
    }

    // Solve R[]
    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && a[st.top()] >= a[i]) {
            st.pop();
        }
        if (st.empty())
            R[i] = n - 1;
        else
            R[i] = st.top() - 1;
        st.push(i);
    }
    
    // Update a[]
    for (int i = 0; i < n; ++i) {
        a[i] = R[i] - L[i] + 1;
    }
}

void TestCase() {
    // Read
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    // Cộng dồn
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i > 0 && a[i][j] != 0)
                a[i][j] += a[i - 1][j];
        }
    }

    // Solve
    int res = 0;
    for (int i = 0; i < n; ++i) {
        // a[i][j] là chiều cao, b[j] là chiều rộng
        vector<int> b(a[i].begin(), a[i].end());
        solve(b, m);
        for (int j = 0; j < m; ++j) {
            res = max(res, min(a[i][j], b[j]));
        }
    }
    cout << res << endl;
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