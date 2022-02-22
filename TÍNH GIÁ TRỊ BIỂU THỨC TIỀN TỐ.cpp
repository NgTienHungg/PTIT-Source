#include <bits/stdc++.h>
using namespace std;

int solve(int x, int y, char c) {
    switch (c) {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    }
}

void TestCase() {
    string s;
    cin >> s;
    
    stack<int> st;
    for (int i = s.length() - 1; i >= 0; --i) {
        if (s[i] >= '0' && s[i] <= '9')
            st.push(s[i] - '0');
        else {
            int x = st.top(); st.pop();
            int y = st.top(); st.pop();
            st.push(solve(x, y, s[i]));
        }
    }
    cout << st.top();
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