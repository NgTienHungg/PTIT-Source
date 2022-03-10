// https://code.ptit.edu.vn/student/question/DSA07023
// ĐẢO TỪ

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    string s, sl;
    getline(cin, sl);
    stringstream ss(sl);
    stack<string> st;
    while (ss >> s) {
        st.push(s);
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
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