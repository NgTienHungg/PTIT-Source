// https://code.ptit.edu.vn/student/question/CPP0802
// TÍNH TỔNG

#include <bits/stdc++.h>
using namespace std;

long long ans = 0;
void solve(string s) {
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '-') continue;
        if (s[i] < '0' || s[i] > '9') return;
    }
    
    // Kiểm tra số âm, nếu có loại dấu -
    bool isNeg = 0;
    if (s[0] == '-') {
        s.erase(0, 1);
        isNeg = 1;
    }
    
    if (s.length() > 10) return; // quá int
    long long num = 0;
    for (int i = 0; i < s.length(); ++i) {
        num = num * 10 + (s[i] - '0');
    }
    if (isNeg) num = -num;
    if (num >= INT_MIN && num <= INT_MAX) ans += num;
}

int main() {
    ifstream fi;
    fi.open("DATA.in");

    string s;
    while (fi >> s) {
        solve(s);
    }
    cout << ans;
    return 0;
}