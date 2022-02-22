#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    int k;
    string s;
    cin >> k >> s;

    for (int i = 0; i < s.length(); ++i) {
        if (k == 0) break;

        // Tìm char lớn nhất (lớn hơn s[i]) và đứng sau i
        char c = '0';
        for (int j = i + 1; j < s.length(); ++j) {
            c = max(c, s[j]);
        }
        if (c <= s[i]) continue;

        string newz = s;
        for (int j = i + 1; j < s.length(); ++j) {
            // Nếu có nhiều char cùng bằng c, thử swap các TH và lấy TH max
            if (s[j] == c) {
                string temp = s;
                swap(temp[i], temp[j]);
                newz = max(newz, temp);
            }
        }

        if (newz > s) {
            s = newz;
            k--;
        }
    }
    cout << s;
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