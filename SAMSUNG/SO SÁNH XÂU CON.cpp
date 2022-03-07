#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

struct Data {
    int dd[127] = {0};
};

string S;
int Q, a, b, c, d;
vector<Data> v(5e4 + 1);

void prepare() {
    for (int i = 1; i < S.length(); ++i) {
        int val = S[i];
        for (int j = 0; j < 127; ++j) {
            v[i].dd[j] = v[i - 1].dd[j];
            if (j == val)
                v[i].dd[j] += 1;
        }
    }
}

bool isOK() {
    for (int i = 0; i < 127; ++i) {
        if (v[b].dd[i] - v[a - 1].dd[i] != v[d].dd[i] - v[c - 1].dd[i])
            return 0;
    }
    return 1;
}

void TestCase() {
    cin >> S >> Q;
    S = '#' + S;
    prepare();
    
    while (Q--) {
        cin >> a >> b >> c >> d;
        if (isOK())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1;
    // cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}