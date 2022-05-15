// DI CHUYỂN TRÊN MA TRẬN NHỊ PHÂN

#include <bits/stdc++.h>
using namespace std;

int BinToDec(string s) {
    int x = 0;
    for (int i = 0; i < s.length(); ++i) {
        x = x * 2 + (s[i] - '0');
    }
    return x;
}

string DecToHec(int x) {
    string s = "";
    while (x > 0) {
        int mod = x % 16;
        if (mod < 10) s += mod + '0';
        else s += (mod - 10) + 'A';
        x /= 16;
    }
    reverse(s.begin(), s.end());
    return s;
}

void TestCase() {
    int n; cin >> n;
    string a[100][100], dp[100][100];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    dp[0][0] += a[0][0];
    for (int i = 1; i < n; ++i) {
        dp[0][i] = dp[0][i - 1] + a[0][i];
        dp[i][0] = dp[i - 1][0] + a[i][0];
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
        }
    }
    string s = dp[n - 1][n - 1];
    while (s.length() % 4) {
        s = "0" + s;
    }
    for (int i = 0; i < s.length(); i += 4) {
        string sub = s.substr(i, 4);
        int dec = BinToDec(sub);
        string hec = DecToHec(dec);
        cout << hec;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}