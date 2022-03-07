// https://luyencode.net/problem/PTIT027
// PTIT027 - Dãy ngoặc đúng dài nhất

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase() {
    string s;
    cin >> s;
    int n = s.length();

    stack<int> st;
    for (int i = 0; i < n; ++i) {
        if (st.empty() || s[i] == '(')
            st.push(i);
        else {
            if (s[st.top()] != '(')
                st.push(i);
            else
                st.pop();
        }
    }
    if (st.empty()) {
        cout << n << endl;
        return;
    }

    vector<int> v;
    while (!st.empty()) {
        v.push_back(st.top());
        st.pop();
    }
    if (v.front() != n - 1)
        v.push_back(n);
    if (v.back() != 0)
        v.push_back(-1);
    sort(v.begin(), v.end());

    int res = 0;
    for (int i = 1; i < v.size(); ++i)
        res = max(res, v[i] - v[i - 1] - 1);
    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}

// 0 1 2 3 4 5 6 7 8 9 101112131415161718192021        26
// ( ) ( ) ( ) ( ( ) ) ( ) ( ) ( ) ( ) ( ( ( ( ( ) ( ) (
//                                     | | | |         |