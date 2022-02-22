#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    string s; getline(cin, s);
    while (1) {
        int pos = s.find(" ");
        if (pos == -1) break;
        s.erase(pos, 1);
    }
    vector<bool> dd(s.length(), 0);
    stack<int> st;
    for (int i = 0; i < s.length(); ++i) {
        if ((s[i] >= 'A' && s[i] <= 'Z') || s[i] == '+' || s[i] == '-') dd[i] = 1;
        else if (s[i] == '(') {
            st.push(i);
            dd[i] = 1;
        }
        else if (s[i] == ')') {
            int t = st.top(); st.pop();
            if ((t == 0 || s[t - 1] == '(' || s[t - 1] == '+' || i - t == 2) && dd[t] == 1) dd[t] = 0;
            else dd[i] = 1;
        }
    }
    for (int i = 0; i < s.length(); ++i) {
        if (dd[i]) cout << s[i];
    }
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

// 3
// (A  -  B + C)-(A+   (B–C))  -  (C-   (D- E) )
// ((A)-  ((B  )    ))
// A-(   B+C)