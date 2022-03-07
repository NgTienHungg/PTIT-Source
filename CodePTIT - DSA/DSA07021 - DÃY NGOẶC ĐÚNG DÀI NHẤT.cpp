// https://code.ptit.edu.vn/student/question/DSA07021
// DÃY NGOẶC ĐÚNG DÀI NHẤT

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s; cin >> s;
    stack<int> st; // lưu vị trí các dấu ngoặc sai
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ')' && !st.empty() && s[st.top()] == '(')
            st.pop();
        else
            st.push(i);
    }
    
    if (st.empty()) {
        cout << s.length();
        return;
    }
    vector<int> v;
    while (!st.empty()) {
        v.push_back(st.top());
        st.pop();
    }
    sort(v.begin(), v.end());
    if (v.front() != 0)
        v.insert(v.begin(), -1);
    if (v.back() != s.length() - 1)
        v.insert(v.end(), s.length());

    int res = 0;
    for (int i = 1; i < v.size(); ++i) {
        // tính khoảng cách giữa 2 dấu ngoặc sai -> là độ dài dãy ngoặc đúng
        res = max(res, v[i] - v[i - 1] - 1);
    }
    cout << res;
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