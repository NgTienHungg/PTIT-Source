// https://www.spoj.com/PTIT/problems/SSAM219E/
// SSAM219E - BIỂU THỨC HẬU TỐ

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int priority(char c)
{
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0; // Dấu ngoặc
}

void TestCase()
{
    string s;
    cin >> s;
    stack<char> st;
    for (auto x : s) {
        if (x >= 'a' && x <= 'z') cout << x;
        else if (x == '(') st.push(x);
        else if (x == ')') {
            while (!st.empty() && st.top() != '(') {
                cout << st.top();
                st.pop();
            }
            st.pop(); // Xóa dấu '('
        }
        else {
            while (!st.empty() && priority(st.top()) >= priority(x)) {
                cout << st.top();
                st.pop();
            }
            st.push(x);
        }
    }
    while (!st.empty()) {
            cout << st.top();
            st.pop();
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) TestCase();
    return 0;
}