#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

string solve(string s) {
    stack<int> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(')
            st.push(i);
        else if (s[i] == ')') {
            int last = st.top();
            st.pop();

            if (last > 0 && s[last - 1] == '-') {
                for (int j = last + 1; j < i; ++j) {
                    if (s[j] == '-')
                        s[j] = '+';
                    else if (s[j] == '+')
                        s[j] = '-';
                }
            }
        }
    }
    string res = "";
    for (auto x : s) {
        if (x != '(' && x != ')')
            res += x;
    }
    return res;
}

void TestCase() {
    string a, b;
    cin >> a >> b;
    cout << (solve(a) == solve(b) ? "YES" : "NO");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}