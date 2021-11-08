#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    string s;
    cin >> s;
    int len = s.length(), n = 1;
    char dau = s[0], cuoi = s[0];
    for (int i = 1; i < len; ++i) {
        if (s[i] == 'B') {
            if (dau == 'G')
                dau = 'B', n++;
            else if (cuoi == 'G')
                cuoi = 'B', n++;
        }
        else {
            if (dau == 'B')
                dau = 'G', n++;
            else if (cuoi == 'B')
                cuoi = 'G', n++;
        }
    }

    stack<int> st;
    while (n > 0) {
        st.push(n % 2);
        n /= 2;
    }
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
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