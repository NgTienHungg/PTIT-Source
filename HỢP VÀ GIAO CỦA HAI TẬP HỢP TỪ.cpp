#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    string a, b, token;
    getline(cin, a);
    getline(cin, b);

    set<string> s1, s2;
    stringstream ss1(a), ss2(b);
    while (ss1 >> token) {
        transform(token.begin(), token.end(), token.begin(), ::tolower);
        s1.insert(token);
    }
    while (ss2 >> token) {
        transform(token.begin(), token.end(), token.begin(), ::tolower);
        s2.insert(token);

    }
    map<string, int> dd;
    for (auto x : s1) dd[x]++;
    for (auto x : s2) dd[x]++;

    for (auto x : dd) {
        cout << x.first << " ";
    }
    cout << "\n";
    for (auto x : dd) {
        if (x.second > 1) 
            cout << x.first << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    TestCase();
    return 0;
}