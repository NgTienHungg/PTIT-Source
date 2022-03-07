// https://luyencode.net/problem/EZCHUXH
// EZCHUXH - Xuất ký tự( Bản dễ )

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int dd[26] = {0};
    for (auto x : s) {
        dd[x - 'a']++;
    }
    for (int i = 0; i < 26; ++i) {
        if (dd[i] > 0) {
            cout << char(i + 'a') << ":" << dd[i] << endl;
        }
    }
    return 0;
}