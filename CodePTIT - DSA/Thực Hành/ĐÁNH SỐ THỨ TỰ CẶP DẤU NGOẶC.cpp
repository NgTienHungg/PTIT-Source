#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; getline(cin, s);
    int index = 0;
    stack<int> st;
    vector<int> res;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') {
            index++;
            st.push(index);
            res.push_back(index);
        } else if (s[i] == ')') {
            res.push_back(st.top());
            st.pop();
        }
    }
    for (int i : res) cout << i << " ";
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
