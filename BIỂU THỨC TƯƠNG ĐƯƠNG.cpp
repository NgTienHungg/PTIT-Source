#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    string s;
    cin >> s;

    stack<int> st; // Lưu index của dấu ( gần nhất
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(')
            st.push(i);
        else if (s[i] == ')') {
            int last = st.top();
            st.pop();

            if (last > 0 && s[last - 1] == '-') {
                for (int j = last + 1; j < i; ++j) {
                    if (s[j] == '+')
                        s[j] = '-';
                    else if (s[j] == '-')
                        s[j] = '+';
                }
            }
        }
    }

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != '(' && s[i] != ')')
            cout << s[i];
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
        cout << endl;
    }
    return 0;
}