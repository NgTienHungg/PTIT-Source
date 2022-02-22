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
    for (auto x : s) {
        if (x >= '0' && x <= '9')
            st.push(x - '0');
        else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            st.push(solve(a, b, x));
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