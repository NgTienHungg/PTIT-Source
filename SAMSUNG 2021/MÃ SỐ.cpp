#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

int n, a[10], vs[10];
vector<string> num;

void Try_num(int i, string s) {
    for (int j = 1; j <= n; ++j) {
        if (i == n) num.push_back(s + char(j + '0'));
        else Try_num(i + 1, s + char(j + '0'));
    }
}

void Try(int i, string s) {
    for (int j = 0; j < n; ++j) {
        if (!vs[j]) {
            vs[j] = 1;
            if (i == n) {
                string word = s + char(j + 'A');
                for (auto x : num) {
                    cout << word << x << endl;
                }
            }
            else Try(i + 1, s + char(j + 'A'));
            vs[j] = 0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    Try_num(1, "");
    Try(1, "");
    return 0;
}