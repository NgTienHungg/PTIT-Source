#include <bits/stdc++.h>
using namespace std;

bool check(char c) {
    if (c == '(' || c == ')' || c == '[' || c == ']')
        return true;
    return false;
}

void testCase() {
    string s; getline(cin, s);
    vector<char> v; // Vector lưu các dấu ngoặc
    for (char x : s) {
        if (check(x)) v.push_back(x);
    }

    stack<char> st; // Stack lưu các dấu ngoặc sai
    for (int i = 0; i < v.size(); ++i) {
        // Dạng ()
        if (v[i] == ')') {
            if (!st.empty() && st.top() == '(') {
                st.pop();
                continue;
            }
        }
        // Dạng []
        if (v[i] == ']')  {
            if (!st.empty() && st.top() == '[') {
                st.pop();
                continue;
            }
        }
        st.push(v[i]);
    }
    if (st.empty()) cout << "YES";
    else cout << "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T; cin.ignore();
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}