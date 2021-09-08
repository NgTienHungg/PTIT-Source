// https://code.ptit.edu.vn/student/question/CPP0734
// HÌNH CHỮ NHẬT LỚN NHẤT - 2

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &a)
{
    int n = a.size();
    vector<int> l(n), r(n);

    stack<int> st;
    for (int i = 0; i < n; ++i) {
        while (!st.empty() && a[st.top()] >= a[i]) {
            st.pop();
        }
        if (st.empty())
            l[i] = 0;
        else
            l[i] = st.top() + 1;
        st.push(i);
    }
    
    while (!st.empty()) {
        st.pop();
    }

    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && a[st.top()] >= a[i]) {
            st.pop();
        }
        if (st.empty())
            r[i] = n - 1;
        else
            r[i] = st.top() - 1;
        st.push(i);
    }

    for (int i = 0; i < n; ++i) {
        a[i] = r[i] - l[i] + 1;
    }
}

void TestCase()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    // Tính chiều cao của hcn tại (i,j) với (i,j) là đáy
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] == 0 || i == 0)
                continue;
            else
                a[i][j] += a[i - 1][j];
        }
    }

    int res = 0;
    // Tìm chiều rộng max của hcn tại (i,j) với a[i][j] là chiều cao
    for (int i = 0; i < n; ++i) {
        vector<int> b(a[i].begin(), a[i].end());
        solve(b);
        for (int j = 0; j < m; ++j) {
            res = max(res, a[i][j] * b[j]);
        }
    }
    cout << res << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}