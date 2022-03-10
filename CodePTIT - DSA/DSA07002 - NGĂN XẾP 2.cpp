// https://code.ptit.edu.vn/student/question/DSA07002
// NGĂN XẾP 2

#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, x;
    cin >> n;
    string s;
    stack<int> st;
    while (n--) {
        cin >> s;
        if (s == "PUSH") {
            cin >> x;
            st.push(x);
        }
        else if (s == "POP") {
            if (!st.empty()) {
                st.pop();
            }
        }
        else if (s == "PRINT") {
            if (st.empty())
                cout << "NONE";
            else
                cout << st.top();
            cout << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}