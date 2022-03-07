// https://code.ptit.edu.vn/student/question/DSA02015
// LOẠI BỎ DẤU NGOẶC

#include <bits/stdc++.h>
using namespace std;

int max_len;
map<string, bool> mp;

bool isValid(string s) {
    if (s.length() < 2)
        return false;
    stack<int> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(')
            st.push(1);
        else if (s[i] == ')') {
            if (st.empty())
                return false;
            st.pop();
        }
    }
    return st.empty();
}

void Try(string s, int ind) {
    if (s.length() < max_len)
        return;
    if (isValid(s)) {
        if (s.length() > max_len) {
            max_len = s.length();
            mp.clear();
        }
        mp[s] = true;
        return;
    }
    for (int i = ind; i < s.length(); ++i) {
        if (s[i] == '(' || s[i] == ')') {
            string tmp = s;
            tmp.erase(i, 1);
            Try(tmp, i);
        }
    }
}

void testCase() {
    string s; cin >> s;
    max_len = 0;
    mp.clear();
    Try(s, 0);
    if (mp.empty()) cout << -1;
    else {
        for (auto i : mp) {
            cout << i.first << " ";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}