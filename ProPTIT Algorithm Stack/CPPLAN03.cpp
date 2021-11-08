// https://code.ptit.edu.vn/student/question/CPP0326
// TÍCH HAI SỐ NGUYÊN LỚN

#include <bits/stdc++.h>
using namespace std;

string Sum(string a, string b) {
    if (a.length() < b.length())
        a.insert(0, b.length() - a.length(), '0');
    else
        b.insert(0, a.length() - b.length(), '0');

    string res = "";
    int temp = 0;
    for (int i = a.length() - 1; i >= 0; i--) {
        temp = (a[i] - '0') + (b[i] - '0') + temp;
        res.insert(0, 1 , temp % 10 + '0');
        temp /= 10;
    }

    if (temp > 0)
        res.insert(0, 1, temp + '0');
    return res;
}

string Mul(char a, string b) {
    string res = "";
    int temp = 0;
    for (int i = b.length() - 1; i >= 0; --i) {
        temp = (a - '0') * (b[i] - '0') + temp;
        res.insert(0, 1, temp % 10 + '0');
        temp /= 10;
    }

    if (temp > 0)
        res.insert(0, 1, temp + '0');
    return res;
}

void TestCase() {
    string a, b;
    cin >> a >> b;

    int len = a.length();
    string s, res = "";
    
    for (int i = len - 1; i >= 0; --i) {
        s = Mul(a[i], b);
        s.insert(s.length(), (len - 1) - i, '0');
        res = Sum(res, s);
    }
    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}