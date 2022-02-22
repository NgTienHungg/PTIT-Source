// https://luyencode.net/problem/STPARA
// STPARA - Cuộc diễu hành đường phố

#include <bits/stdc++.h>
using namespace std;

void TestCase(int n) {
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    stack<int> st;
    int id = 1;
    for (int i = 0; i < n; ++i) {
        while (a[i] != id) {
            if (!st.empty() && st.top() == id) {
                st.pop();
                id++;
            }
            else {
                st.push(a[i]);
                i++;
            }
        }
        id++;
    }

    while (!st.empty()) {
        if (st.top() != id) {
            cout << "no\n";
            return;
        }
        else {
            st.pop();
            id++;
        }
    }
    cout << "yes\n";
}

int main() {
    int n;
    while (cin >> n) {
        if (n == 0)
            break;
        TestCase(n);
    }
    return 0;
}