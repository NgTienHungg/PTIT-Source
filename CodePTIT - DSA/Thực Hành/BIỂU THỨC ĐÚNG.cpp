#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    string s;
    getline(cin, s);
    int res = 0, dem = 0;
    stack<int> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') {
            st.push(i);
            dem++;
            res = max(res, dem);
        }
        else if (s[i] == ')') {
            if (!st.empty() && s[st.top()] == '(') {
               st.pop();
               dem--;
            } else {
                cout << -1;
                return;
            }
        }
    }
    if (!st.empty())
        cout << -1;
    else
        cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T; cin.ignore();
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}

