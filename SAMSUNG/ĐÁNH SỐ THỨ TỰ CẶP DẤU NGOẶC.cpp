#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    string s; getline(cin, s);
    int cou = 1;
    vector<int> res;
    stack<int> st;
    for (auto x : s) {
        if (x == '(') {
            st.push(cou);
            res.push_back(cou);
            cou++;
        }
        else if (x == ')') {
            res.push_back(st.top());
            st.pop();
        }
    }
    for (auto x : res) cout << x << " ";
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