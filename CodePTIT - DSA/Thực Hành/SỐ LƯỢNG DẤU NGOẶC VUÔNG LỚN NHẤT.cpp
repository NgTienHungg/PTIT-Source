#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    string s; cin >> s;
    stack<int> st;
    st.push(-1);
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ')' and !st.empty() and s[st.top()] == '(')
            st.pop();
        else if (s[i] == ']' and !st.empty() and s[st.top()] == '[')
            st.pop();
        else
            st.push(i);
    }
    st.push(s.length());
    
    vector<int> v;
    while (!st.empty()) {
        v.push_back(st.top());
        st.pop();
    }
    reverse(v.begin(), v.end());
    // for (int i : v) cout << i << " ";

    int res = 0;
    for (int i = 1; i < v.size(); ++i) {
        int count = 0;
        for (int j = v[i - 1] + 1; j < v[i]; ++j) {
            if (s[j] == '[')
                count++;
        }
        res = max(res, count);
    }
    cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}