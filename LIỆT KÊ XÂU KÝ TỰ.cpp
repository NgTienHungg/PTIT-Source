#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

char c;
int n;
set<string> st;

void Try(int i, string s) {
    for (char x = (i == 1 ? 'A' : s.back()); x <= c; ++x) {
        if (i == n) st.insert(s + x);
        else Try(i + 1, s + x);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> c >> n;
    Try(1, "");
    for (auto x : st) {
        cout << x << endl;
    }
    return 0;
}