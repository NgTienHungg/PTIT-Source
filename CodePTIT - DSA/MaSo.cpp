#include <bits/stdc++.h>
using namespace std;

int n;
string s;
vector<string> word, num;
vector<bool> vs; // dung de sinh word

void genNum(int i) {
    for (int j = 0; j < n; ++j) {
        s[i] = j + '1';
        if (i == n - 1) num.push_back(s);
        else genNum(i + 1);
    }
}

void genWord(int i) {
    for (int j = 0; j < n; ++j) {
        if (!vs[j]) {
            vs[j] = true;
            s[i] = j + 'A';
            if (i == n - 1) word.push_back(s);
            else genWord(i + 1);
            vs[j] = false;
        }
    }
}

void testCase() {
    cin >> n;
    s.resize(n);
    vs.resize(n, false);
    genNum(0);
    genWord(0);
    for (string i : word) {
        for (string j : num) {
            cout << i + j << endl;
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