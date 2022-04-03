#include <bits/stdc++.h>
using namespace std;

int n;
string s;
vector<string> nums;
vector<string> words;
bool vs[10] = {};

void TryNum(int i) {
    for (int j = 1; j <= n; ++j) {
        s[i] = j + '0';
        if (i == n - 1) {
            nums.push_back(s);
        } else {
            TryNum(i + 1);
        }
    }
}

void TryWord(int i) {
    for (int j = 1; j <= n; ++j) {
        if (!vs[j]) {
            vs[j] = true;
            s[i] = (j - 1) + 'A';
            if (i == n - 1) {
                words.push_back(s);
            } else {
                TryWord(i + 1);
            }
            vs[j] = false;
        }
    }
}

void testCase() {
    cin >> n;
    s.resize(n);
    TryNum(0);
    TryWord(0);
    for (string i : words) {
        for (string j : nums) {
            cout << i << j << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}