// https://code.ptit.edu.vn/student/question/DSA02030
// LIỆT KÊ XÂU KÝ TỰ

#include <bits/stdc++.h>
using namespace std;

char c;
int k;
string s;

void Try(char i) {
    for (char j = i; j <= c; ++j) {
        s.push_back(j);
        if (s.length() == k) cout << s << endl;
        else Try(j);
        s.pop_back();
    }
}

void testCase() {
    cin >> c >> k;
    Try('A');
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