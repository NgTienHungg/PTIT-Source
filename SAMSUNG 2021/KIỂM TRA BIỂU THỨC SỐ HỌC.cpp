#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
    stack<int> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') st.push(i);
        else if (s[i] == ')') {
            int t = st.top();
            st.pop();
            if (i - t == 2) return 1;
            if (s[t + 1] == '(' && s[i - 1] == ')') return 1;
        }
    }
    return 0;
}

void TestCase() {
    string s; getline(cin, s);
    if (check(s)) cout << "Yes";
    else cout << "No";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T; cin.ignore();
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}