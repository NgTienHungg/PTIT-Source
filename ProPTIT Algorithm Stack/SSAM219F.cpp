// https://www.spoj.com/PTIT/problems/SSAM219F/
// SSAM219F - TÍNH TOÁN GIÁ TRỊ BIỂU THỨC

#pragma GCC optimize("02")
#include <bits/stdc++.h>
using namespace std;

int priority(char c) {
    if (c == '*' || c == '/') return 3;
    if (c == '+' || c == '-') return 2;
    return 1;
}

bool isOperator(string s) {
    return (s == "*" || s == "/" || s == "+" || s == "-");
}

long long calculate(long long x, long long y, string o) {
    if (o == "*") return x * y;
    if (o == "/") return x / y;
    if (o == "+") return x + y;
    if (o == "-") return x - y;
}

long long to_num(string s) {
    long long num = 0;
    for (auto x : s) {
        num = num * 10 + (x - '0');
    }
    return num;
}

void TestCase() {
    string s;
    cin >> s;

    vector<string> ve; // Lưu các toán hạng và toán tử theo dạng biểu thức hậu tố
    stack<char> st;    // Lưu các toán tử và dấu ngoặc
    for (int i = 0; i < s.length(); ++i) {
        // Xử lý toán hạng
        if (isdigit(s[i])) {
            string num = "";
            while (i < s.length() && isdigit(s[i])) {
                num += s[i];
                i++;
            }
            i--;
            ve.push_back(num);
        }
        // Xử lý toán tử hậu tố
        else if (s[i] == '(')
            st.push(s[i]);
        else if (s[i] == ')') {
            while (st.top() != '(') {
                ve.push_back(string(1, st.top()));
                st.pop();
            }
            st.pop(); // Xóa dấu '('
        }
        else {
            while (!st.empty() && priority(st.top()) >= priority(s[i])) {
                ve.push_back(string(1, st.top()));
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty()) {
        ve.push_back(string(1, st.top()));
        st.pop();
    }

    // Bắt đầu tính toán
    stack<long long> stk; // Lưu kết quả của các phép tính với 2 toán hạng
    for (int i = 0; i < ve.size(); ++i) {
        // Nếu gặp toán tử
        if (isOperator(ve[i])) {
            long long y = stk.top(); stk.pop();
            long long x = stk.top(); stk.pop();
            stk.push(calculate(x, y, ve[i]));
        }
        else
            stk.push(to_num(ve[i]));
    }
    cout << stk.top() << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}